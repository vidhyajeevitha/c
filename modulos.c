#include <stdio.h>

int main(void)
{ 
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d%d",&a ,&b,&c);
    a=a*b;
    c=a%c;
    printf("the mod value is %d",c);
  return 0;
  }
