#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*
	int i=1;
	while(i<=5)
	{
		cout<<i<<endl;
		i++;
	} */

/*
	for(int i=1; i<=8; ++i)
	{
		cout<<i<<endl;
	} */

/*
	int i=1;
	for(; i<=6; ++i)
	{
		cout<<i<<endl;
	} */

	/*
	for(int i=1; i<=10; cout<<i++<<endl){

	}*/

	int n;
	cin>>n;
	for (int i =1; i<=n; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}