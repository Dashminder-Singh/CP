#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*
	char a='A';
	char b='C';
	//cout<<(int)a<<endl;
	cout<<a<<endl;
	cout<<a-b;*/

	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<(char)(j+64);// A= 65
			//cout<<(int)(j+64);
		}
		cout<<endl;
	}
	return 0;
}