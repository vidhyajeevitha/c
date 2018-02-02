#include<stdio.h>
int main()
{
int array[50],min,size,b,locathion=4;
printf("enter the no.of elements in array");
scanf("%d",&size);
printf("enter %d integers",size);
scanf("%d",&array[b]);
min=array[0];
for(b=1;b<size;b++)
{
if(array[b]<min)
{
min=array[b];
location=b+1;
}
}
printf("min element is present at location %d and its value is%d",location,min);
return0;
}
