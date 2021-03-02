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

int main()
{
	int n, digit_sum=0;
	cin>>n;
	while(n>0)
	{
		digit_sum=digit_sum+ n%10;
		n=n/10;
	}


	int digit_sum1=0;
	cin>>n;
	while(n>0)
	{
		digit_sum1=digit_sum1+ n%10;
		n=n/10;
	}
	cout<<digit_sum+ digit_sum1;
	return 0;
}