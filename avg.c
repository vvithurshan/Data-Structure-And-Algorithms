#include <stdio.h>

int main(){
	int n, number ;
	float avg;

	printf("\nType the length of the number: ");
	scanf("%d",&n);
	avg = 0;
	for(int i = 0; i < n;  ++i){
		scanf("\n%d",&number);
		avg = avg + number;
	}
		avg = avg/n;
		printf("Average is: %f\n",avg);
}

