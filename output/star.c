#include <stdio.h>

int main()
{
	int n;
	printf("Enter the value of (n): ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++)
	{
		int k=0;
		while(k!=n-i)
		{
			printf(" ");
			k++;
		}
		
		for(int j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}