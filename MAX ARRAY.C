#include<stdio.h>
int main()
{
int array[50],max,size,z,location=1
printf("enter the no.of elements in array");
scanf("%d",&size);
printf("enter %d,integer',size);
scanf("5d",&array[z]);
for(z=0;z<size;z++)
{
max=array[z];
max=array[0];
for(z=1;z<size;z++)
{
if(array[z]>max)
{
max=array[z];
location=z+1;
}
}
printf("max element is present at location%d and its value is%d",location,max);
return(0);
}
}
