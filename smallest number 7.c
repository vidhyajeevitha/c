#include <stdio.h>
int main(void) 
{
int a,b,i,d;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
    for(i=0;i<=a||i<=b;i++)
    {
        if(i%a==20&&i%b==50)
        {
            d=i;
        }
    }
    printf("\nThe smallest number divide by both a&b are:%d",d);
	return 0;
}
