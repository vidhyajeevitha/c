#include <stdio.h>
int main(void) 
{
int m,i,count=0,j,k;
char a[100],t;
scanf("%[^\m]s",&a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=0;i<count;i++)
{
if(i%2!=0)
{
t=a[i];
a[i]=a[i-1];
a[i-1]=t;
}
}
printf("%s",a);
	return 0;
}
