#include <stdio.h>

int main(){
  int num;

  printf("Enter a number: ");
  scanf("%d",&num);

  if(num==0){
    printf("You have to enter greater than 0 number.");
  }
  else if(num % 2 ==0){
    printf("This is a Even number.");
  }
  else{
    printf("This is Odd number.");
  }

  return 0;

}