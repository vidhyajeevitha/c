#include<stdio.h>
int main()
{
	int z;
	printf("enter the value ");
	scanf("%d",&z);
	while(z%10!=0)
	{
		z++;
	}
	printf("nearset number is %d",z);
  return 0;
}
