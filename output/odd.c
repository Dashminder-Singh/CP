#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*for(int i=1; i<=10; i++)  // 10 odd numbers
	{
		printf("%d\n", 2*i-1);
	}*/

	for(int i=1; i<=10; i++)  // 10 odd numbers in range bw 1 and 10
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}