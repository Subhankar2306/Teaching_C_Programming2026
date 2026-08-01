// Write a C Program to take 5 subject marks and Calculate Total, Percentage, and Grade based on percetage.
#include <stdio.h>
int main()
{

  int b, e, p, m, c;
  float T, P;

  //	printf("Enter obtain marks: ");
  //	scanf("%d %d %d %d %d",&b,&e,&p,&m,&c);

  printf("Enter Bengali marks: ");
  scanf("%d", &b);
  printf("Enter English marks: ");
  scanf("%d", &e);
  printf("Enter Physics marks: ");
  scanf("%d", &p);
  printf("Enter Mathematics marks: ");
  scanf("%d", &m);
  printf("Enter Chemistry marks: ");
  scanf("%d", &c);

  T = b + e + p + m + c;
  P = (T / 500) * 100;

  printf("The total number is: %.2f\n", T);
  printf("Total Percentage is: %.2f\n", P);

  if (P >= 90)
  {
    printf("Grade - AA");
  }
  else if (P >= 80)
  {
    printf("Grade - A+");
  }
  else if (P >= 65)
  {
    printf("Grade - A");
  }
  else if (P >= 45)
  {
    printf("Grade - B+");
  }
  else if (P >= 35)
  {
    printf("Grade - B");
  }
  else if (P >= 25)
  {
    printf("Grade - C");
  }
  else
  {
    printf("Grade - D");
  }
  return 0;
}