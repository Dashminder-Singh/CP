#include <stdio.h>
#include <stdlib.h>

void even(int arr[], int N)
{
	int i;
	for(i=0; i<N; i++)
	{
		if(i%2!=0)
		{
			printf("%d ",arr[i]);
		}
	}
}

int main()
{
	int arr[]={1, 2, 3, 4, 5};
	int n=sizeof(arr)/sizeof(int);
	even(arr,n);
	return 0;
}