#include <bits/stdc++.h>
using namespace std;

/*
void swap(int a, int b)  // pass by value,  nochange
{
	int temp=a;
	a=b;
	b=temp;
}*/

void swap(int &a, int &b)  // pass by reference, change
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a=4, b=6;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b;
}