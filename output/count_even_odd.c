//Write a program to return the difference between the count of odd numbers and even numbers

#include <stdio.h>

int count_odd_even_diff(int A[], int N)
{
	int even, odd, diff;
	even=0;
	odd=0;


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

	diff=even-odd;
	return diff;
}

int main()
{
	int arr[]={10, 20, 30, 40, 45 , 19, 28 ,32};  // 6-2 =4
	int size=sizeof(arr)/sizeof(int);

	int res=count_odd_even_diff(arr, size);
	printf("Difference is %d\n",res);

	return 0;
}