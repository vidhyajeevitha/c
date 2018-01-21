#include<stdio.h>
int main()
{
char c;
printf("enter a character:");
scanf("%c",&c);
if((c>='s'&& c<='v')//(c>='v'&& c>='s'))
printf("%c is an alphabet:",c);
else
printf("%c is not an alphabet:",c);
rreturn 0;
}
