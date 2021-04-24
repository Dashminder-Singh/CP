#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	//cout<<(int)str[str.size()-1];  53='5' 52='4'
	int last=str[str.size()-1] - '0';
	cout<<last;
	return 0;
}