#include<stdio.h>
int main()
{
int a,i,flag=0;
scanf("%d",&n);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
}
