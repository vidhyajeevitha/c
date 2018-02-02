#include<stdio.h>
int main()
{
char s[30];
int i,flag=0,n=0;
printf('enter the string");
scanf("%s",s);
for(i=o;s[i]!='/0';i++)
{
if(s[i]=='0'//s[i]=='1'//s[i]=='2')
{
flag==flag+1;
}
}
if(flag==0)
printf("given string not contains number");
else
printf("the given string contains number");
getch();

