#include <stdio.h>

int seq(long n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;

	int seq[n];
	seq[1]=0;
	seq[2]=1;

	for(int i=n; i<=n; i++)
	{
		seq[i]=1 *seq[i-1]+ 2* seq[i-2]+ 3 *1;
	}
	return seq[n];
}

int main()
{
	printf("%d",seq(3));
	return 0;
}