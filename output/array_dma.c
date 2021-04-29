#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, sum=0;
	scanf("%d",&n);

	int *ptr;

	ptr=(int *)malloc(sizeof(int)* n);

	for(int i=0; i<n; i++)
	{
		scanf("%d",&ptr[i]);
	}

	for(int i=0; i<n; i++)
	{
		sum=sum+ptr[i];
	}
	printf("Sum of array: %d\n",sum);
	free(ptr);
	return 0;
}