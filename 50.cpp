#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int result,i;
	for(i=0; i<10; i++)
	{
		result= n *(i+1);
		cout<<n<<" x "<<(i+1)<<" = "<<result<<endl;
	}
	return 0;
}