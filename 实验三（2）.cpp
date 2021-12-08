#include<iostream>
using namespace std;
class date
{
public:
    date(int y=0,int m=0,int d=0 )
    {
        year=y;
        month=m;
        day=d;
    }
    date(date &p)
    {
     year=p.year;
     month=p.month;
     day=p.day;
    }
    ~date(){}
    void display()
    {
        cout<<year<<"/"<<month<<"/"<<day<<endl;
    }
private:
    int year,month,day;
};
class people
{
public:
    people(int n=0,char s='m',int i[19]={0})
    {
        int j;
        number=n;
        sex=s;

        for(j=0;j<19;j++)
            id[j]=i[j];
    }
    people(people & p)
    {
        int j;
        number=p.number;
        sex=p.sex;
        birthday=p.birthday;
        for(j=0;j<19;j++)
        id[j]=p.id[j];
    }
    ~people(){}
   void  Display()
   {
       birthday.display();
   }
private:
    int number;char sex;date birthday;int id[19];
};

int main()
{
    cout<<1;
    return 0;
}
