#include<stdio.h>
int main( void)
{
int i,j,a,n,number[i];

printf("\n enter the value of N");
scanf("%d",&n);
printf("enter the number of N ");
scanf("%d",&number[i]);
for(i=0;i<n;++i)
{
	for(j=0;j<n;++j)
	{
		if(number[i]>number[j])
		{
			a=number[i];
			number[i]=number[j];
			number[j]=a;
		}
		printf("the ascending numbers are");
		
		for(i=0;i<n;++i)
		{
			scanf("%d",&number);
		}
	}

return 0;
}
}
