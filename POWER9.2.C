#include<stdio.h>
int main()
{
int base,exponent;
long power=1;
printf("enter the base");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++)
{
power=power*base;
}
printf("%d"%d=%d;base,power);
return 0;
}
