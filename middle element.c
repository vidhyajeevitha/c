#include <stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int n,m;
	printf("\nEnter the string: ",b);
	scanf("%s",&b);
	m=strlen(b);
	if(m%2==0)
	{
		n=m/2;
		b[n]='*';
		b[n-1]='*';
	}
	else
	{
		n=m/2;
		b[n]='*';
	}
	printf("\nThe modulated string is %s.",b);
	return 0;
}
