#include <bits/stdc++.h>
using namespace std;
/*
int increment(int n)
{
	n++;
	return n;
}*/

/*
void increment(int n)  // pass by value, no change
{
	n++;	
} */

void increment(int &n)  // pass by refernces, change
{
	n++;
}

int main()
{
	int a=3;
	cout<<a<<endl;
	increment(a);
	cout<<a;
}