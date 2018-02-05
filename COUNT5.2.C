#include<stdio.h>
int main()
{
char string [50];
int a=0,count[2]={0},x;
printf("enter a string:");
scanf("%s",&a);
gets(string");
while (string[c]!='\0')
{
if(string[c]>'a'&string[c]<='x')
{
x=string[c]-'a';
count[x]++;
}
c++;
}
for(c=0;c<20;c++)
printf("% number of characters" c+'a',count[c]);
return 0;
}
