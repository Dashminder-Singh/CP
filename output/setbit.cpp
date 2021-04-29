#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a, b, c;
	a=0; //most
	b=-1;	//least
	c=-1;

	int i=0;
	while(n>0)
	{
		if(n&1)
		{
			a++;
			if(b==-1)
			{
				b=i;
			}
			c=i;
		}
		i++;
		n=n>>1; //right shift
	}
	cout<<to_string(a)<<"#"<<to_string(b)<<"#"<<to_string(c);
	return 0;
}