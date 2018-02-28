#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[35],b[34];
	int length,length1,i,j,count=0;
	scanf("%s\n",a);
	scanf("%s\n",b);
	length=strlen(a);
	length1=strlen(b);
	if(length==length1)
	{
		for(i=0;i<length;i++)
		{
			if(a[i]==b[i])
			{
				count=0;
				}
			else
      }
			count=count+1;
		}
		if(count==1)
		{
			printf("yes\n");
		}
	else
  {
	printf("no\n");
  }
  return 0;
}
