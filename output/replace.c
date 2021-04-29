#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace(char *str)
{
	int i;
	char ch;
	char *result;
	result=malloc(sizeof(char) *strlen(str));
	for(i=0; str[i]!='\0'; i++)
	{
		ch=(str[i]+3-97)%26+97;
		result[i]=ch;
	}
	result[i]='\0';
	return result;
}

int main()
{
	char *s;
	s=(char *)malloc(sizeof(char) *strlen(s));
	gets(s);

	printf("%s\n",replace(s));
	return 0;
}