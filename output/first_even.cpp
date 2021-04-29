#include <bits/stdc++.h>
using namespace std;

void evenOdd(int a, int b)
{
    if(a<b)
    {
        if(a%2==0 && b%2==0 && a<b)
        {
            cout<<a<<endl;
            cout<<b<<endl;
        }
        else if(a%2==0 && b%2!=0 && a<b)
        {
        	cout<<a<<endl;
        	cout<<b<<endl;
        }
        else if(a%2!=0 && b%2==0 && a<b)
        {
        	cout<<a<<endl;
        	cout<<b<<endl;
        }
        else if(a%2!=0 && b%2!=0 && a<b)
        {
        	cout<<a<<endl;
        	cout<<b<<endl;
        }
    }

    else
    {
    	if(a%2==0 && b%2==0 && a>b)
        {
            cout<<b<<endl;
            cout<<a<<endl;
        }
        else if(a%2==0 && b%2!=0 && a>b)
        {
        	cout<<b<<endl;
        	cout<<a<<endl;
        }
        else if(a%2!=0 && b%2==0 && a>b)
        {
        	cout<<b<<endl;
        	cout<<a<<endl;
        }
        else if(a%2!=0 && b%2!=0 && a>b)
        {
        	cout<<b<<endl;
        	cout<<a<<endl;
        }
    }
}

int main()
{
    evenOdd(2, 3);
    return 0;
}