#include<stdio.h>
int main()
{
int num,remainder,result=0;
printf("enter a number:");
scanf("%d",&num);
num=number;
while(number!=0)
{
remainder=number%10;
result=remainder*remainder*remainder;
number/=10;
}
if(result==num)
printf("%d is an armstrong number:");
return(0);
}
}
