#include <bits/stdc++.h>
using namespace std;

/*
void func(string s) // pass by value 
{
	s="";
}
*/
void func(string &s) // pass by value 
{
	s="";
}
int main()
{
	string str="ashu";
	
	cout<<str<<endl;
	func(str);
	cout<<str;
}

