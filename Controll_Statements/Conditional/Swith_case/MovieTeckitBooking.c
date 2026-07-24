#include <stdio.h>

int main()
{
  int show;

  printf("========== MOVIE SHOW ==========\n");
  printf("1. Morning Show\n");
  printf("2. Afternoon Show\n");
  printf("3. Evening Show\n");
  printf("4. Night Show\n");

  printf("\nEnter Show Number: ");
  scanf("%d", &show);

  switch (show)
  {
  case 1:
    printf("Morning Show Ticket Price = Rs.120");
    break;

  case 2:
    printf("Afternoon Show Ticket Price = Rs.180");
    break;

  case 3:
    printf("Evening Show Ticket Price = Rs.220");
    break;

  case 4:
    printf("Night Show Ticket Price = Rs.250");
    break;

  default:
    printf("Invalid Show Selection");
  }

  return 0;
}