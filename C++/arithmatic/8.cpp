#include <bits/stdc++.h>
using namespace std;

int main()
{
	// overflow

	double a=100000;
	double b=100000;
	double c=a * b;

	c=1e24;  // is => 10^24

	//cout<<c<<endl; 
		// output 1e+010

	//cout<<fixed<<c<<endl; 
			// output 10000000000.000000

	//cout<<fixed<<setprecision(0)<<c<<endl;
			// output 10000000000
	cout<<fixed<<c;

	return 0;
}