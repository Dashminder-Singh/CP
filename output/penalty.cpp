#include <bits/stdc++.h>
using namespace std;

int penalty(int arr[], int n)
{
	int p=0;
	sort(arr,arr+n);

	for(int i=1; i<n; i++)
	{
		p=p + abs(arr[i]- arr[i-1]);
	}
	return p;
}

int main()
{
	int arr[]={3, 2, 1};
	int size=sizeof(arr)/sizeof(int);

	printf("%d\n",penalty(arr, size));
	return 0;
}