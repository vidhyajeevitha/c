#include<stdio.h>

#include<conio.h>
void main()

{
long int a,b,div,mod,n;
scanf("%d",&n);
switch(n)
{
	case 1:
	scanf("%ld / %ld",&a,&b);
	printf("%ld",a/b);
	break;
	case 2:
	scanf("%ld % %ld",&a,&b);

	printf("%ld",(a%b));

	break;
}
getch();
}
