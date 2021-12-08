#include<iostream>
using namespace std;
int qwe(int,int);
class Rational
{
    private:
    int X,Y;
    public:
        Rational(int x=1,int y=1){
            int t;
            t=qwe(x,y);
            X=x/t;Y=y/t;}
        void Add(Rational t){
            int a,b,n;
            n=(Y*t.Y)/qwe(Y,t.Y);
            X=X*(n/Y);
            Y=n;t.X=t.X*(n/t.Y);X=X+t.X;
            n=qwe(X,Y);
            X=X/n;Y=Y/n;}
        void Sub(Rational t){
            int a,b,n;
            n=(Y*t.Y)/qwe(Y,t.Y);
            X=X*(n/Y);Y=n;t.X=t.X*(n/t.Y);
            X=X-t.X;
            n=qwe(X,Y);
            X=X/n;Y=Y/n;}
        void Mul(Rational t){
            int n;
            X=X*t.X;Y=Y*t.Y;
            n=qwe(X,Y);X=X/n;Y=Y/n;}
        void Div(Rational t){
            int n;
            X=X*t.Y;Y=Y*t.X;
            n=qwe(X,Y);
            X=X/n;Y=Y/n;}
        void show(void){
        cout<<X<<"/"<<Y<<endl;
        cout<<(1.0*X)/Y<<endl;}
};
int main()
{
     Rational ch(6,9) ,ch2(3,9), ch3(6,9), ch4(3,9),ch5(6,9),ch6(3,9),ch7(6,9),ch8(3,9);
   ch.Add(ch2);ch.show();
   ch3.Sub(ch4);ch3.show();
   ch5.Mul(ch6);ch5.show();
   ch7.Div(ch8);ch7.show();
   return 0;
}
int qwe(int a,int b){
    int t;
       if(b>a){
        t=a;a=b;b=t;}
        t=a%b;
        while(t>0){
          a=b;b=t;t=a%b;}
        return b;}
