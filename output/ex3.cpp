#include <iostream>
using namespace std;

void swap(int x,int y)
{
	y=x*y;
	x=y/x;
	y=y/x;
	cout<<"A= "<<x<<" B= "<<y<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter the value of (a) and (b): ";
	cin>>a>>b;
	cout<<"A= "<<a<<" B= "<<b<<endl;
	swap(a,b);
	return 0;
}