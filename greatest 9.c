#include <stdio.h>
int main(void)
{
	int i,d,c,j;
	scanf("%d%d",&i,&d);
	for(j=2;j<=i;j++)
	{
		if(i%j==0  &&  d%j==0);
		{
			c=j;
		}
	}
	printf("%d",c);
	return 0;
}
