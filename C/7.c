#include <stdio.h>

int main()
{
	int n, last_digit, sum_digit=0;
	scanf("%d",&n);

	while(n>0)
	{
		last_digit=n%10;
		sum_digit=sum_digit + last_digit;
		n=n/10;
	}
	printf("%d",sum_digit);
	return 0;
}