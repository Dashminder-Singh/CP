#include <stdio.h>

void plusMinus(int arr_count, int* arr) 
{
    int pos, neg, zero;
    
    pos=neg=zero=0;
    
    for(int i=0; i<arr_count; i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
    }

    printf("%.6f\n",(float)pos/arr_count);
    printf("%.6f\n",(float)neg/arr_count);
    printf("%.6f\n",(float)zero/arr_count); 
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    plusMinus(n, arr);
    return 0;
}