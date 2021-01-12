#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<"Even";
	}
	else if(n%3==0)
	{
		cout<<"Divisble by 3";
	}
	else
	{
		cout<<"Odd";
	}

	return 0;
}