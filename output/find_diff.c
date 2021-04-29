
//Write a program to find the difference between the elements at odd index and even index.
#include <stdio.h>
void find_diff(int A[], int N)
{
	int even,odd;
	even=0;
	odd=0;
	for(int i=0; i<N; i++)
	{
		if(i%2==0)
		{
			even=even +A[i];
		}
		else
		{
			odd=odd+ A[i];
		}
	}
	printf("Difference is %d\n", even-odd);
}

int main()
{
	int arr[]={10, 20, 30, 40, 50, 60, 70};
	int size=sizeof(arr)/sizeof(int);

	find_diff(arr, size);
	return 0;
}