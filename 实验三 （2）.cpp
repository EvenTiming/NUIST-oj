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
{private:
    int year,month,day;
};
class people
{
public:
    people(int n=0;char s=m;date b(0,0,0);char i="0")
    {
        number=n;
        sex=s;
        birthday=b;
        id=i;
    }
    people(people & p)
    {
        number=p.number;
        sex=p.sex;
        birthday=p.birthday;
        id=p.id;
    }
    ~date(){}
   void  display()
   {
   birthday.display;
   }
private:
    int number;char sex;date birthday;char id[20];
};

int main()
{
    cout<<1;
    return 0;
}
