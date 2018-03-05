#include <stdio.h>
int main(void)
{
    int b[10],n,k,r=0,temp,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    while(r<k)
    {
        temp=b[n-1];
        for(i=n-1;i>0;i--)
        {
            b[i]=b[i-1];
        }
        b[0]=temp;
        r++;
        
    }
    for(i=0;i<n;i++)
        printf("%d",b[i]);
    

return (0);
}
