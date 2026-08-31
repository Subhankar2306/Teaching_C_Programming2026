#include <stdio.h>

int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, result;

    printf("Enter first numbers: ");
    scanf("%d", &a);

    printf("Enter second numbers: ");
    scanf("%d", &b);

    result = largest(a, b);

    printf("Largest between %d and %d is: %d",a,b, result);

    return 0;
}