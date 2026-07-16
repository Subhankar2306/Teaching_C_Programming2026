#include <stdio.h>

int main(){
	
	float I,P,R,T;
	
	printf("Enter the Principle amount: ");
	scanf("%f",&P);
	printf("Enter the Annual Rate of intrest: ");
	scanf("%f",&R);
	printf("Enter the Time period: ");
	scanf("%f",&T);
	
	I=(P*R*T)/100;
	
	printf("The Installment will be: %.2f ",I);
	
	return 0;
}