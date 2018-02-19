#include <stdio.h>
int main() 
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=x-y;
	if(x%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
