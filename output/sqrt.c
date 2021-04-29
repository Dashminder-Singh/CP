#include <stdio.h>
#include <math.h>

int isperfect(long n)
{
	long sr;
	if(n>0)
	{
		sr=sqrt(n);

		if(sr*sr==n)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	long n;
	scanf("%d",&n);

	if(isperfect(n)!=0)
		printf("Yes\n");
	else
		printf("No\n");
	
	return 0;
}