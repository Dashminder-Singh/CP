#include <stdio.h>

void min_of_3(int arr[], int N)
{
	int a,b,c;
	a=b=c=arr[0];

	for(int i=1; i<N; i++)
	{
		if(arr[i]<a)
		{
			c=b;
			b=a;
			a=arr[i];
		}
		else if(arr[i]<b)
		{
			c=b;
			b=arr[i];
		}
		else
		{
			c=arr[i];
		}
	}
	printf("%d %d %d\n",a,b,c);
}

int main()
{
	int arr[]={50,40,30,20,10};
	int size=sizeof(arr)/sizeof(int);

	min_of_3(arr,size);
	return 0;
}