#include <iostream>
using namespace std;

int main()
{
	int N,arr[20],ans=1;
	cin>>N;
	for(int i=0;i<N; i++)
	{
		cin>>arr[i];
		ans=(ans*arr[i])%(1000000000+7);
	}
	cout<<ans<<" ";

	return 0;
}