#include <stdio.h>

void max_of_three(int arr[],int N)
{
	int a,b,c;
	a=b=c=0;
	for(int i=0; i<N; i++)
	{
		if(arr[i]>a)
		{
			c=b;
			b=a;
			a=arr[i];
		}
		else if(arr[i]>b)
		{
			c=b;
			b=arr[i];
		}
		else
		{
			c=arr[i];
		}
	}
	printf("%d %d %d", a,b,c);
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];

	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	max_of_three(arr,n);
	return 0;
}