#include <bits/stdc++.h>
using namespace std;

void func(int a[][20]) // passing  2d- array to the func 
{
	a[0][0]=5;
}

int main()
{
	int arr[10][20];
	arr[0][0]=7;
	cout<<arr[0][0]<<endl;
	func(arr);
	cout<<arr[0][0];
}

