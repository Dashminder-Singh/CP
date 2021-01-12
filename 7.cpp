#include <bits/stdc++.h>
using namespace std;

int main()
{
	// overflow

	int a=100000;	//10 ^9
	int b=100000;
	int c=a * b;
	cout<<c<<endl;

	long int x=100000;
	long int y=100000;
	long int z=x * y;
	cout<<z<<endl;

	long i=1000000000; //10 ^18
	long long j=1000000000;
	long long k=i * j;
	cout<<k<<endl;

	int p=100000; //
	 int q=10000;
	long long r=p*1LL* q;
	cout<<r<<endl;


	/*pre define INT_MAX
	-INT_MIN<int <INT_MAX  

	int max=INT_MAX;  // equalto 10^9
	cout<<max; */
	return 0;
}