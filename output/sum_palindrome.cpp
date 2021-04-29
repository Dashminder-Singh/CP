#include <bits/stdc++.h>
using namespace std;

int isrev(int n)
{
	int r,y,x;
	y=0;
	x=n;
	while(x!=0)
	{
		r=x%10;
		y=y*10+r;
		x=x/10;
	}
	if(y==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

int main()
{
	
	return 0;
}