#include<stdio.h>
int main(void)
{
    int n,n1,n2;
    printf("enter the value");
    scanf("%d",&n);
    while(n==0)
    {
        n=n/10;
        n2=n;
        n1=+n;
        
    }
    printf("THE VALUE IS :",n);
    return 0;
}
