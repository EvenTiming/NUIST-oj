#include<iostream>
using namespace std;
class CRectangle
{
   int l=1;
   int w=1;
   public:
     void getdata(void);
     void show(void);
};
 void CRectangle::getdata(void)
 {
     cout<<"Enter l and w:"<<endl;
     cin>>l>>w;
 }
 void CRectangle::show(void)
 {
     cout<<"P=";
     cout<<2*(l+w)<<endl;
 }

int main()
{
    CRectangle a;
    a.getdata();
    a.show();
    return 0;
}
