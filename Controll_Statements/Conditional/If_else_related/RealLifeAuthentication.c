// Write a program to Permit Access to a Website.

#include <stdio.h>
#include <stdbool.h>
int main()
{
  bool isLoggedIn = true;
  bool isAdmin = false;

  int securityLavel; // 1 = Heighest Level.
  printf("Enter your level between 1 to 3: ");
  scanf("%d",&securityLavel);


  if (isLoggedIn && (isAdmin || securityLavel <= 2))
  {
    printf("Access granted\n");
  }
  else
  {
    printf("Access denied\n");
  }
  return 0;
}
