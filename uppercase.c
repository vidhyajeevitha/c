#include <stdio.h>
int main(void) {
	char a[10];
	scanf("%s",a);
	int i,j,x;
	for(i=0;a[i]!='\0';i++)
	{
	j=a[i];
		if(j>91)
		{
		x=j-32;
			a[i]=x;
		}
		if(j<97)
		{
		x=j+32;
			a[i]=x;
		}
	}
	printf("%s",a);
	return 0;
}
