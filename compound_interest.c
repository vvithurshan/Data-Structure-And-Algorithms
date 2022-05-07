#include <stdio.h>
#include <math.h>

int main(){
	float F,i,n,r,P;
	printf("Welcome to Compound Interest Calculator\n");
	printf("\nType your principal Amount(P): ");
	scanf("\n%f",&P);
	printf("Rate of interest: ");
	scanf("\n%f",&r);
	printf("Number of years: ");
	scanf("\n%f",&n);
	r=12;
	n=5;
	i = r/100;
	F = P * pow(1+i, n);
	printf("Compound Interest for %0.2f is %0.2f\n\n",P,F);
}

