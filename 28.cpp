#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int N=str.size();
	int i;
	for(i=0; i<N/2; i++)
	{
		if(str[i]!=str[N-1-i])
		{
			cout<<"No";
			break;
		}
	}
	if(i==N/2)
	{
		cout<<"Yes";
	}
	return 0;
}