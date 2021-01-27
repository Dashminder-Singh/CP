#include <bits/stdc++.h>
using namespace std;

int indices(int A[],int N,int target)
{
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(target == A[i] + A[j])
			{
				cout<<i<<" ";
			}
		}
	}
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		int target;
		cin>>target;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		indices(arr,n,target);
	}
	return 0;
}



/*
	2 -> test case
	4 18
	7 2 11 15
	4 40
	40 2 3 37*/
