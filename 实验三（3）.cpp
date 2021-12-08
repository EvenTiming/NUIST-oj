#include<iostream>
using namespace std;
class Cargo {
public:
	Cargo(int w);
	~Cargo();
	int Weight();
	int TotalWeight();
private:
	int weight;
	static int totalWeight;
};
int Cargo::totalWeight=0;
Cargo::Cargo(int w):weight(w)
{
	totalWeight+=weight;
}
Cargo::~Cargo()
{
	totalWeight-=weight;
}
int Cargo::Weight()
{
	return weight;
}
int Cargo::TotalWeight()
{
	return totalWeight;
}
ostream& tab(ostream& out)
{
	return out<<"\t";
}
int main()
{
	Cargo c1(2);
	cout<<c1.Weight()<<tab<<c1.TotalWeight()<<endl;
	Cargo c2(3);
	cout<<c2.Weight()<<tab<<c2.TotalWeight()<<endl;
	c1.~Cargo();
	cout<<c2.TotalWeight();
}
