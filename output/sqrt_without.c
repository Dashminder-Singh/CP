#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	float temp, sqr;

	sqr=n/2;
	temp=0;

	while(sqr!=temp)
	{
		temp=sqr;

		sqr=(n/temp+temp)/2;
	}

	printf("%d is %.2f\n",n,sqr);

	return 0;
}