#include <stdio.h>

int main()
{
	int a, sum=0;
	for(int i=0; i<5; i++)
	{
		printf("Enter %d value: ",i+1);
		scanf("%d", &a);
		sum=sum+a;
	}
	printf("%d\n",sum);
	return 0;
}