#include <stdio.h>

int main(){
	int num1, num2;
	printf("Enter the First number: ");
	scanf("%d",&num1);
	printf("Enter the Second number: ");
	scanf("%d",&num2);
	
	// if(num1>num2){
	// 	printf("%d is Larger.",num1);
	// }
	// else{
	// 	printf("%d is Larger",num2);
	// }
	
  // Using Ternary Operator

  (num1>num2) ? printf("%d is Larger.",num1) : printf("%d is Larger.",num2);
	return 0;
}

