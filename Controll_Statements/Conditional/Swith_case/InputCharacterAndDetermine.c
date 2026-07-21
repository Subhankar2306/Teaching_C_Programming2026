/* Write a C program to input a character and determine whether it is:
 Alphabet
 Digit
 Special Character
 
 */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("%c is a Digit.", ch);
            break;

        default:

            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {
                printf("%c is an Alphabet.", ch);
            }
            else
            {
                printf("%c is a Special Character.", ch);
            }
    }

    return 0;
}