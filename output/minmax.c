#include <stdio.h>

void minmax(int arr[], int N)
{
	long max,min,sum;
	max=0;
	min=arr[0];
	sum=0;
	for(int i=0; i<N; i++)
	{
		if(arr[i]>max)
		{	
			max=arr[i];
		}
		else if(arr[i]<min)
		{	
			min=arr[i];
		}
		sum=sum+arr[i];
	}
	printf("max and min: %ld %ld\n",sum-max, sum-min);
}

int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);

	minmax(arr, n);
	return 0;
}