//Write a program to calculate and return the sum of absolute difference between the 
//adjacent number in an array of positive integers from the position entered by the user.

#include <stdio.h>
#include <stdlib.h>
int findTotalSum(int n, int arr[])
{
    int difference, sum=0;
    for(int i=0; i<=n-2; i++)
    {
        difference =abs(arr[i]-arr[i+1]);  // |2-4|=2
        sum = sum + difference;
    }
    return sum;
}
int main()
{
    int arr[]={1, 2, 3, 4, 5};

    int n=sizeof(arr)/sizeof(int);
    int result = findTotalSum(n, arr);
    printf("Sum of absolute difference: %d\n",result);
    return 0;
}