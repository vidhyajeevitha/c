#include<stdio.h>
int main()
{
int b[30],n,i,max;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&b[i])
}
max=b[0];
for(i=0;i<n;i++)
{
if(b[i]>max);
{
max=b[i];
}}
printf("%d is the maximum number:",max);
return 0;
}
