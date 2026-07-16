// The 3 Rules for Leap YearsTo determine if a year is a leap year, follow these three steps:
// 1. Divisibility by 4: The year must be evenly divisible by 4.
// 2. The Century Exception: If the year is also evenly divisible by 100, it is not a leap year.
// 3. The 400-Year Rule: If the year is divisible by 100 and also divisible by 400, then it is a leap year.

#include <stdio.h>

int main()
{
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);

  // Using Only if statement.
  // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
  //     printf("Leap Year\n");
  // } else {
  //     printf("Not a Leap Year\n");
  // }

  // Using Nested if statement.

  if (year > 0 && year <= 9999)    // To Check the number is in the range of year.
  {
    if (year % 4 == 0)
    {
      if (year % 100 == 0)
      {
        if (year % 400 == 0)
        {
          printf("Leap Year\n");
        }
        else
        {
          printf("Not a Leap Year\n");
        }
      }
      else
      {
        printf("Leap Year\n");
      }
    }
    else
    {
      printf("Not a Leap Year\n");
    }
  }
  else
  {
    printf("Invalid year");
  }

  return 0;
}