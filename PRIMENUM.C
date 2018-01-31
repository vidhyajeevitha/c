#include<stdio.h>
int main()
{
int n,i,j,min,max,flag=0;
printf("enter 2 numbers(intervals):");
scanf("%d %d',&min,&max);
peintf("the prime numbers between %d&%dare:);
for(i=min+1;i<max;i++)
{
flag=0;
for(j=2;j<=sqrt(i);j++)
{
if(i%j=0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",i);
}
}
getch()
}
