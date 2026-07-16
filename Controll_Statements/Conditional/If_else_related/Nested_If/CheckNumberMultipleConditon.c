#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
        {
            printf("The number is 0.\n");
        }
        else
        {
            printf("The number is Positive.\n");

            // Even or Odd check
            if (num % 2 == 0)
            {
                printf("It is Even.\n");
            }
            else
            {
                printf("It is Odd.\n");
            }

            // Greater than 100 check
            if (num > 100)
            {
                printf("It is greater than 100.\n");
            }
            else
            {
                printf("And It is not greater than 100.\n");
            }
        }
    }
    else
    {
        printf("The number is Negative.\n");
    }

    return 0;
}