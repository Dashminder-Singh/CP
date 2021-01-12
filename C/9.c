#include <stdio.h>

void duplicate(int A[], int N)
{
	for(int i=0; i<N; i++)
	{
		for (int j=i+1; j<N; j++)
		{
			if(A[i]==A[j])
			{
				printf("%d ",A[j]);
			}	
		}
	}
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

	duplicate(arr,n);
	return 0;
}