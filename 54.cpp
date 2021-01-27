#include <bits/stdc++.h>
using namespace std;

void upper(string &s)
{
	int N= s.size();

	for(int i=0; i<N; i++ )
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
}

int main()
{
	string s1,s2,s3,s4,s5;
	cin>>s1>>s2>>s3>>s4>>s5;
	upper(s1);
	upper(s2);
	upper(s3);
	upper(s4);
	upper(s5);
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5;
	return 0;
}