#include<stdio.h>
int main()
{
int min,max,i,tem1,tem2,rem,n=0,result=0;
printf("enter 2 numbers(intervals):");
scanf("%d %d",&min,&max);
printf("armstrong number between %d and %d are:",min,max);
for(i=min +1;i<max;++i)
{
tem2=i;
tem1=i;
while(tem1 !=0)
{
tem1 /=10;
++n;
}
while(tem2 !=0)
{
rem=tem2%10;
result=pow(rem,n);
tem 2=10
}
if(result==i)
{
printf("%d",i);
}
n=0;
result=0;
}
return0;
}
