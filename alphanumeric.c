#include<stdio.h>
#include<string.h>
int main(void)
{
	char b[10];
	int n,i;
	scanf("%s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(b[i]=='0'||b[i]=='1'||b[i]=='2'||b[i]=='3'||b[i]=='4'||b[i]=='5'||b[i]=='6'||b[i]=='7'||b[i]=='8'||b[i]=='9')
		printf("%c",b[i]);
	}

	
	return 0;
}
