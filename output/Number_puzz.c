#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n)
{
	int temp;
	for(int round=1; round<n; round++)
	{
		for(int i=0; i<n-round; i++)
		{
			if(arr[i]> arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}

void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int absolute_value(int arr[], int n)
{
	int sum=0;
	for(int i=n-1; i>0; i--)
	{
		sum=sum+ abs(arr[i]- arr[i-1]);
	}
	return sum;
}

int main()
{
	int arr[]={3, 2, 1};
	int size=sizeof(arr)/sizeof(int);

	sort(arr, size);
	printf("%d\n",absolute_value(arr, size));
	return 0;
}