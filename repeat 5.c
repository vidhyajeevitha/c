#include <stdio.h>
#include<string.h>

int main(void) {


char z[20],c;
	int i,j,count=1,max=1,l;
    gets(z);
    l=strlen(z);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		if(z[i]==z[j])
		{
			count++;
			if(count>max)
			{
				max=count;
				c=z[i];
			}
		}
 
	}
	printf("\n%c",c);
	return 0;
}


