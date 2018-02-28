#include <stdio.h>

int main(void) {
 
	int a[3],i,minmum;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
minimum=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]<minimum)
		minimum=a[i];
	}
	printf("%d",minimum);

	return 0;
}
