// Write a C program to take N from the user and print the square of every number from 1 to N.

#include<stdio.h>

int main(){
  int n, i;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("The Square of every number from 1 to %d\n",n);

  for(i=1; i<=n; i++){
    printf("%d ",i*i);
  }
  return 0;
}