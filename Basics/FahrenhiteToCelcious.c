// #include <stdio.h>

// // Fahrenhite to Celcious 
// int main()
// {
//   float C, F;

//   printf("Enter the temparature in Fahrenhite: ");
//   scanf("%f", &F);

//   C = (F - 32) * 5 / 9;

//   printf("The temparature in Celcious is: %.2f", C);

//   return 0;
// }

// Celcious to Fahrenhite

#include <stdio.h>

int main(){
	
	float c,f;
	printf("Enter the temparature in Celcious: ");
	scanf("%f",&c);
	
	f=c*9/5+32;
	
	printf("The temparature in Fahrenhite is: %.2f",f);
	
	return 0;
}