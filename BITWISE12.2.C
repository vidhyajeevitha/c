include<stdio.h>
int main()
{
    int a=34,b=56;
   printf("value of a=%d b=%d before swapping:",swapping a,b);
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
     printf("value of a=%d b=%d after  swapping:",swapping a,b);
    return 0;
    
}
