#include <stdio.h>
#include<conio.h>
void main() 
{
	int a[3],i,k;
	scanf("%d",&k);
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		if(a[i]==k)
		printf("yes");
	}
getch();
}
