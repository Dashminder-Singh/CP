#include <stdio.h>
#include <math.h>

long sumofGP(long a, long r, int n)
{
	long sum;

	sum= a * (pow(r,n)-1)/(r-1);
	return sum;
}

int main()
{
	long a, r;
	int n;

	a=1,  r=3;
	n=2;
	printf("Sum of GP is %ld\n",sumofGP(a, r, n));
	return 0;
}