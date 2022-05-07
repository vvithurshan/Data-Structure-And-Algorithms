#include <stdio.h>

int main(){
	float r, area;
	
	do{
		printf("\nEnter Radius: (100 to Quit) ");
		scanf("%f",&r);
		area = getchar();

		if(r<1){
			printf("\ninvalid input");
			continue;
		}
		if(r == 100){
			break;
		}

		area = 22.0/7*r*r;
		printf("\nArea is %f",area);
	}
	while(r>=1 || r<=99);
	/*if && is added then loop will not run if the input is invalid, so keep 	|| to run even it is invalid)*/


}
