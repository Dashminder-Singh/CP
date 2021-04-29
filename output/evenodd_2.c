#include <stdio.h>

void even_odd(int A[], int N)
{
	int even, odd;
	even=odd=0;
	for(int i=0; i<N; i++)
	{
		if(A[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Number of even is %d\n",even);

	printf("Number of odd is %d\n",odd);
}

int main()
{
	int arr[]={10, 15, 8, 6 ,3 , 5, 11, 23};
	int size=sizeof(arr)/sizeof(int);

	even_odd(arr, size);
	return 0;
}