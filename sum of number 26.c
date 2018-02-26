#include<stdio.h>
int main( void)
{
  int b[5],n,sum=0;
  printf("Enter the total numbers");
  scanf("%d",&n);
  printf("Enter value");
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&b[i]);
  }
  printf("\n");
for(int i=1;i<=n;i++)
{
  sum=sum+b[i];
}
printf("%d",sum);
  return 0;
}
