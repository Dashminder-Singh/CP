#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
	int arr[10];
	//arr[0]=10;
	arr[10]=12;
	cout<<arr[10];*/
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum=sum + arr[i];
	}
	cout<<sum;

	return 0;
}