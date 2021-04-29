#include <iostream>
using namespace std;

void swap(int &a,int &b)           // copy by refrence_(&)
{
	int temp=a+b;
	b=a;
	a=temp-b;
	cout<<"A: "<<a<<" B: "<<b<<endl;
}

int main()
{
	int x=2,y=16;
	cout<<"X: "<<x<<" Y: "<<y<<endl;	
	swap(x,y);   						//pass the value
	return 0;
}