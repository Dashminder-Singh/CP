#include <stdio.h>
#include <stdlib.h>

int moving(int arr[], int n)
{
	int sum, avg, result;
	sum=0;
	result=0;
	for(int i=0; i<n; i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;

	for(int i=0; i<n; i++)
	{
		result=result+ abs(avg- arr[i]);
	}
	return result;
}

int main()
{
	int arr[]={1, 2, 3};
	int size=sizeof(arr)/sizeof(int);

	printf("%d\n",moving(arr, size));
	return 0;
}