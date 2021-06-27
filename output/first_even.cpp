#include <bits/stdc++.h>
using namespace std;

void evenOdd(int a, int b)
{
       if(a%2==0 && b%2==0)
       {
			cout<<a<<endl;
		    cout<<b<<endl;
       }
       else if(a%2==0 && b%2!=0)
		{
			cout<<a<<endl;
            cout<<b<<endl;
	 	}
        else if(a%2!=0 && b%2==0)
	    {
	        cout<<b<<endl;
    	    cout<<a<<endl;
    	}
    	else 
    	{
    		cout<<a<<endl;
    		cout<<b<<endl;
    	}
}

int main()
{
    evenOdd(5, 2);
    return 0;
}