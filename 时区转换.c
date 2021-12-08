#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int d(char* z1,char* z2);
int main()
{
    int cishu,k=0;
    cin>>cishu;
    while(k<cishu){
        int h=0,minutes=0;
        int ne;
        char timezone1[5],timezone2[5];
        char time[9];
        cin>>time;
        if(time[0]=='n'){
            h=12;
        }
        else if(time[0]=='m'){
        }
        else{
                sscanf(time,"%d:%d",&h,&minutes);
                h %= 12;
                cin>>time;
                if(time[0] == 'p')
                    h += 12;
        }
        cin>>timezone1>>timezone2;
        ne = h * 60 + minutes + d(timezone2,timezone1);
        if(ne < 0)
            ne += 1440;
        ne %= 1440;
        if(ne==0){
            cout<<"midnight"<<endl;
        }
        else if(ne==720){
            cout<<"noon"<<endl;
        }
        else{
            h = ne / 60;
            minutes = ne % 60;
            if(h == 0){
                printf("12:%d a.m.\n",minutes);
            }else if(h < 12){
                printf("%d:%d p.m.\n",h,minutes);
            }else if(h== 12){
                printf("12:%d p.m.\n", minutes);
            }else{
                printf("%d:%d p.m.\n", h%12, minutes);
            }
        }
        k++;
    }
    return 0;
}
int d(char* z1,char* z2){
    int i,j;
    float time[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
    char* z[32]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK",
                    "MSD","AST","ADT","NST","NDT","EST","EDT","CST","CDT","MST",
                    "MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
    for(i=0;strcmp(z[i],z1);i++);
    for(j=0;strcmp(z[j],z2);j++);
    return (int)((time[i] - time[j])*60);
}
