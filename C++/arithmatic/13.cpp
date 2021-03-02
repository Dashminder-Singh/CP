#include <bits/stdc++.h>
using namespace std;

// How many Test cases you want
int main()
{
	int t;
	cin>>t;
	//for(int test=1; test<=t; test++)

	while(t--) // t!= false
	{
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
	}
	return 0;
}