#include <stdio.h>

void update(int *p,int *q)
{
	int temp=*p;
	*p=*p+*q;
	*q= temp> *q ?(temp-*q):(*q-temp);
}

int main()
{
	int a,b;
	int *p,*q;
	p=&a, q=&b;

	scanf("%d%d",&a,&b);
	update(p,q);
	printf("%d\n%d",a,b);
	return 0;
	
	//printf("%d\n%d",*p,*q);
	// a=4, b=9
	//*p=4,*q=9
	// *(&a)=4, *(&b)=9
}