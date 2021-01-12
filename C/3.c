#include <stdio.h>

int greatest(int A,int B,int C,int D)
{
	if(A>B && A>C && A>D)
	{
		return A;
	}
	else if(B>C && B>D){
		return B;
	}
	else if(C>D){
		return C;
	}
	else{
		return D;
	}
}
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max=greatest(a,b,c,d);
	printf("%d",max);
	return 0;
}