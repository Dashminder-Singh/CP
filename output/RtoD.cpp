#include <bits/stdc++.h>
using namespace std;

int digit(char c)
{
	int value=0;
	switch(c)
	{
		case 'I': value=1;
		break;
		case 'V': value=5;
		break;
		case 'X': value=10;
		break;
		case 'L': value=50;
		break;
		case 'C': value=100;
		break;
		case 'D': value=500;
		break;
		case 'M': value=1000;
		break;
		case '\0': value=0;
		break;
		default: value=-1;
	}
	return value;
}

int main()
{
	char Roman[1000];
	long int number;
	number=0;
	int i=0;
	cout<<"Enter Roman Number: ";
	cin>>Roman;

	while(Roman[i]!='\0')
	{
		if(digit(Roman[i])<0){
			cout<<"Invalid Roman number "<<Roman[i];
			return 0;
		}

		if((strlen(Roman)-i) > 2)
		{
			if(digit(Roman[i]) < digit(Roman[i+2]))
			{
				cout<<"Invalid Roman number";
				return 0;
			}
		}

		if(digit(Roman[i])>=digit(Roman[i+1]))
			number=number+ digit(Roman[i]);
		else
		{
			number= number + digit(Roman[i+1])- digit(Roman[i]);
			i++;
		}
		i++;
	}
	cout<<"Its decimal value is: "<<number;
	return 0;
}