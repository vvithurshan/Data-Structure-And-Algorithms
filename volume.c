#include <stdio.h>

int main(){
	float r, V, A;
	printf("\nEnter the radius: ");
	scanf("\n%f",&r);

	V = 4*22/7.0*r*r*r/3;
	A = 4*22/7.0*r*r;

	printf("Volume of sphere with radius %0.2f is %0.2f\n", r, V);
	printf("Area of Sphere with radius %0.2f is %0.2f\n",r, A);
}
