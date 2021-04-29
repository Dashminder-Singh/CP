// sum of first 5 natural nos using while loop
#include <iostream>
using namespace std;

int main()
{
	int i=1, sum=0;
	float avg;
	while(i<=5)
	{
		sum=sum+i;
		i++;
	}
	avg=sum/5;
	cout<<"Sum of first 5 natural nos is: "<<avg<<endl;
	return 0;
}