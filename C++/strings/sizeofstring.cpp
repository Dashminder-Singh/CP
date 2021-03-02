#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;

	int a=s1.size();
	int b=s2.size();
	string s3=s1+s2;

	char temp=s1[0];
	s1[0]=s2[0];
	s2[0]=temp;

	cout<<a<<" "<<b<<endl;
	cout<<s3<<endl;
	cout<<s1<<" "<<s2;
	return 0;
}