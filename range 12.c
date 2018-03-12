#include <stdio.h>
int main(void) 
{
	int a,b,i,j,count=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=b;j++)
		{
			if((j*j)==i)
			{
				count=count+1;
			}
		}
	}
	printf("%d",count);
	return 0;
}
