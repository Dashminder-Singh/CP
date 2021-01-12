#include <bits/stdc++.h>
using namespace std;

void duplicate(int A[],int N)
{
	for(int i=0; i<N; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(A[i]==A[j])
			{
				cout<<A[j]<<" ";
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	duplicate(arr,n);
	return 0;
}