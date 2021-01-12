#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*
	for (int i=0; i<10; ++i)
	{
		if(i==8)
		{
			break;
		}
		cout<<i<<endl;
	}*/

/*
//for(int j=0; j<10; j++){
	for (int i=0; i<10; ++i) // for this loop
	{
		if(i==5)
		{
			if(true){
				if (true){

				}
			}
			break;
		}
		cout<<i<<endl;  // last for loop
	}
//}*/

	for (int i = 0; i<10; ++i)
	{
		if(i==7) // skip 7
		{
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}