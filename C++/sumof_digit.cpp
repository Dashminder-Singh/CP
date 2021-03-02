#include <bits/stdc++.h>
using namespace std;

void printhello()
{
	cout<<"Hello world";
}

int sum(int a,int b)
{
	int c=a+b;
	return c;
}

int digit_sum(int n)
{
	int digit_sum=0;
	while(n>0)
	{
		digit_sum=digit_sum+ n%10;
		n=n/10;
	}
	return digit_sum;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<digit_sum(a) + digit_sum(b);
	return 0;
}