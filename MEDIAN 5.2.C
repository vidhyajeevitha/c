#include<stdio.h>
void swap(int*s,int*q)
{
int t;
t=*s;
*n=*a;
*q=t;
}
void swap(int a[],intn)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
swap(&a[j],&a[j+1]);
}
}
}
int main()
{
int a[]={1,2,3,4};
int n=4
int sum,i,j;
sort(a,n);
n=(n+1)/2-1
printf("median=%d",a[n-1])
return 0;
}
