#include<stdio.h>
#include<conio.h>
void main()
{
int n, t;
long p=1;
t=n;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
p*=n%10;
n=n/10;
}
printf("product is %ld",p);
getch();
}
