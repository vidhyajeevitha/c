#include<stdio.h>
int main()
{
  char str1,str2;
 printf("enter a string");
 scanf("%s",&str1);
 str2=str1rev(str1);
 if(str2==str1)
 {
  printf("yes!!it is a palindrome);
  }
  else
  {
  printf("no!it is not a palindrome");
  }
  return 0;
 }
