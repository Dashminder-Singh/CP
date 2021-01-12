#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i=4,j;
	double d=4.0,e;
	string s="HackerRank";
	string str;

	cin>>j>>e;
	cin.ignore();
	getline(cin,str);
	

	int c= i+j;
	double sum= d+e;
	
	cout<<c<<endl;
	cout<<fixed<<setprecision(1)<<sum<<endl;
	cout<<s+str;
	return 0;
}