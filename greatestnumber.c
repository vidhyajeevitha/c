#include<stdio.h>
int main()
{
int a,b,i;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		b=pow(2,i);
        if(b>a)
		printf("the nearest power of 2 is: %d",b);
	}
  return 0;
}
