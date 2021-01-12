#include <bits/stdc++.h>
using namespace std;

// passing  2d- array to the func gloablly
const int N=1e3+10;
//int arr[N][N];
int a[N];
void func() 
{
	a[0]=5;
}

int main()
{
	a[0]=7;
	cout<<a[0]<<endl;
	func();
	cout<<a[0];
}

