#include <stdio.h>

int count_digit(int n)
{
	int r,count, x;
	count=0;
	x=n;

	while(x!=0)
	{
		r=x%10;
		x=x/10;

		if(n%r==0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	printf("%d\n",count_digit(12));
	return 0;
}