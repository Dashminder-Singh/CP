#include <bits/stdc++.h>
using namespace std;

void func(int *p,int*q)
{
	int temp=*p;
	*p=*p+*q;
	*q=temp>*q? (temp-*q):(*q-temp);
}

int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;

	cin>>a>>b;
	func(p,q);
	cout<<a<<endl<<b;
	return 0;
}