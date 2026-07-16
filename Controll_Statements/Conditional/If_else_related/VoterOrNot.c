#include <stdio.h>
#include <stdbool.h> // When we want use bool variable we need to include this header file.
int main(){
  int age;
  printf("Enter your age to check you are Voter or not: ");
  scanf("%d",&age);

  // if(age>=18){
  //   printf("You are Voter Congratulation!");
  // }
  // else{
  //   printf("You are not Voter!");
  // }

  // Using a Boolean Variable
  bool isVoter = age>=18;

  if (isVoter)
  {
    printf("Voter!");
  }
  else{
    printf("Non Voter!");
  }
  

  return 0;
}