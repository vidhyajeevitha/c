#include<stdio.h>
int main()
{
double n1,n2,n3;
printf("enter the 3 values:");
scanf("%1f%1f%1f",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
printf("%1f is largest number:",n1);
if(n2>=n1 && n2>=n3)
printf("%1f is  largest number:"n2);
if(n3>n1 && n3>=n2)
printf("%1f is largest number:"n3);
return 0;
}
