#include <bits/stdc++.h>
using namespace std;

struct item
{
	string name;
	int price;
	int weight;
};

int duplicate(item list1[],int m, item list2[],int n)
{
	int count=0;
	for(int i=0; i<m; i++)
	{
		for(int j=1; j<n; j++)
		{
			if((list1[i].weight != list2[i].weight))
				{
					count++;
					break;
				}	
		}
	}
	return count;
}

int main()
{
	item list1[]={{"ball",2,1},{"box",2,2},{"ball",2,1}};
	item list2[]={{"box",2,3},{"ball",2,1}};

	
	int m,n;
	m= sizeof(list1)/sizeof(list1[0]);
	n= sizeof(list2)/sizeof(list2[0]);

	int c=duplicate(list1, m, list2,n);
	cout<<c;
	return 0;
}