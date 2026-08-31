#include <stdio.h>

int prime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = prime(n);

    if (result == 1)
        printf("%d is Prime Number",n);
    else
        printf("%d is Not Prime Number",n);

    return 0;
}