#include <stdio.h>

int main(){
	float C, F;
	printf("\nType the Fahrenheit value: ");
	scanf("\n%f",&F);

	C = (5.0/9)*(F-32);
	printf("%.2f Fahrenheit is %.2f Celsius \n",F, C);
}

