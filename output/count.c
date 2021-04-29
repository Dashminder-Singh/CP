#include <stdio.h>

int main()
{
	int n;
	printf("Enter how many values: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values: ");
	for (int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	int count=0;
	for (int i=0; i<n; i++)
	{
		count++;
	}
	printf("Number of elements is: %d",count);
	return 0;
}