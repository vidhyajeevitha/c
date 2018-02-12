#include <stdio.h>
int main(void) 
{
	int a,b,t;
printf("enter the number:\n");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("after swapping %d\t%d",a,b);
	return 0;
}
