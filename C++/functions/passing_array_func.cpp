#include <bits/stdc++.h>
using namespace std;


void func(int a[]) // passing array to the func 
{
	a[0]=5;
}

int main()
{
	int arr[10];
	arr[0]=7;
	cout<<arr[0]<<endl;
	func(arr);
	cout<<arr[0];
}

