#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 
  int l=0,i,n;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n%2==0)
  {
      i=n/2;
      printf("%d\t",i);
      n=i;
  }
 getch();
}
