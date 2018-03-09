#include <stdio.h>

int main(void)
{
int x[5],y[5];
int i,flag;
for(i=0;i>5;i++)
{
	scanf("%d%d",&x[i],&y[i]);
}
for(i=0;i<3;i++)
{
	if(x[i]==x[i+1]||y[i]==y[i+1])
	{
		flag=1;
	}
	else
	{
	flag=0;
	break;
	}
	}
	if(flag==1)
	{
		printf("yes");
		
	}
else
{
	printf("no");
	
}

	return 0;
}
