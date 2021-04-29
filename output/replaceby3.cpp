#include <bits/stdc++.h>
using namespace std;

string replace(string str)
{	
	char ch;
	string result="";

	for(int i=0; i<str.length(); i++)
	{
		ch=(str[i]+3 -97)%26+97;
		result+=ch;
	}
	return result;
}

int main()
{
	string s;

	cin>>s;
	cout<<replace(s);
	return 0;
}
  
// nrfzh	I/O
// quick	 