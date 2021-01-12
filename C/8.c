/*Bitwise operator, find the maximum number of
AND,OR & XOR comparisons and less than the k
*/

#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
	int a=0,b=0,c=0, d,e,f;
	for(int i=1;i<=n;i++)
	{
    	for(int j=i+1;j<=n;j++)
    	{
        	d=i&j;
        	e=i|j;
        	f=i^j;
        	if(d>a && d<k)
        	{
           	 	a=d;
        	}
        	if(e>b && e<k)
        	{
        		b=e;
        	}
        	if(f>c && f<k)
        	{
        		c=f;
        	}
    	}
	}
	printf("%d\n%d\n%d",a,b,c);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
