#include <stdio.h>

int powerof(int n)
{	
	while(n!=1)
	{
		if(n%2!=0)
			return -1;
		n=n/2;
	}
	return 1;
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	if(powerof(n)!=-1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}