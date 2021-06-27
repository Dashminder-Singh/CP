#include <bits/stdc++.h>
using namespace std;

void reverse(int &a, int &b)
{
	int r1, r2, y1, y2;

	while(a!=0 && b!=0)
	{
		r1=a%10;
		r2=b%10;
		y1=y1*10+r1;
		y2=y2*10+r2;
		a=a/10;
		b=b/10;
	}

}

void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a,b;
	a=12, b=41;
	cout<<a<<" "<<b<<endl;
	reverse(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}