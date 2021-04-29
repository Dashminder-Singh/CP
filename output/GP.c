#include <stdio.h>
#include <math.h>

int main()
{
	long second, third, r, a;
	int n;

	printf("Enter second,third and n terms: \n");
	scanf("%ld %ld %d", &second, &third, &n);

	r=third/second;
	a=second/r;

	long an;
	an=a *pow(r, n-1);

	printf("Nth term of G.P is %ld\n",an);
	return 0;
}