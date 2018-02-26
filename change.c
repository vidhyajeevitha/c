#include <stdio.h>
#include<conio.h>
{
int N,n[10],i,j;
scanf("%d",&N);

for(i=1;i<=N;i++)
scanf("%d",&n[i]);
for(i=1;i<=N;i++)
{
 for(j=i+1;j<=N;j++)
 {
  if(n[i]>n[j])
   printf("%d",i);
   }
   }
getch();
}
