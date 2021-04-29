#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[20];    
    cin>>s;
    int i,l;
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]!=s[l-1-i])
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==l)
        cout<<"YES"<<endl;
    return 0;
}