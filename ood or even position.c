#include<sdio.h>
int main(void)
{
char s[20],s1[20],s2[20],j=0,k=0;
int i=0;
printf("\nEnter a sring");
scanf("%s",s);
while(s[i]!='\0')
{
if(i%2==0)
{
s1[j]=s[i];
j++;
}
else
{
s2[k]=s[i];
k++;
}
i++;
}
printf("\nOdd position sring:%s",s1);
printf("\nEven Positon sring:%s",s2);
return 0;
}
