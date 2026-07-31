#include <stdio.h>

int main()
{
  int row, column;
  printf("Please put the values of Direction\n");
  printf("Enter the number of row: ");
  scanf("%d", &row);
  printf("Enter the number of column: ");
  scanf("%d", &column);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <=column; j++)
    {
      printf(" * ");
    }
    printf("\n");
  }
  return 0;
}