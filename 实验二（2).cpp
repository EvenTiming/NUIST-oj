#include<iostream>
using namespace std;
class Complex
{
private:
    float r;
    float u;
    public:
        Complex(float i,float j=0)
        {
            r=i;
            u=j;
        }
        void add(Complex t)
        {
            r=r+t.r;
            u=u+t.u;
        }
        void show(void)
        {
            cout<<r<<"+"<<u<<"*i"<<endl;
        }

};
int main()
{
    Complex c1(3,5);
    Complex c2(4.5);
    c1.add(c2);
    c1.show();
    return 0;
}
