#include<stdio.h>
int main(void)
{
	int j,number;
	printf("Enter the Number:");
	scanf("%d",&number);
	for(j=1;j<=number;j++)
	{
		if(number%j==0)
		{
			if(j%2==0)
			{
				printf("%d ",j);
			}
		}
	}
	return 0;
}
