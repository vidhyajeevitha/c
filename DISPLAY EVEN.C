#include<stdio.h>
int main()
{
int f1,f2,rem;
printf("give the first number for the range:");
scanf("%d",&f1);
printf("give the final number for the range:");
scanf("%d",&f2);
printf("the even numbers between %d and %d are",f1,f2);
for(i=f1;i<=f2;i++)
{
rem=i%2
if(rem==0)
printf("/n %d',i);
}
return 0;
}
