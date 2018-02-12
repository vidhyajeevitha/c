#include <stdio.h>
int product(int, int);
int main()
{
    int a, b, result;
 
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    result = product(a, b);
    printf("Product of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int product(int a, int b)
printf("if the number is even:");
{
    if (a < b)
    {
        return product(b, a);
    }
    else if (b != 0)
    printf("if the number is odd:");
    {
        return (a + product(a, b - 1));
    }
    else
    {
        return 0;
    }
}
