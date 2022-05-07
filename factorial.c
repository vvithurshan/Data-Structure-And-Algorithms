#include <stdio.h>
#include <stdlib.h>

int main(){
	long factr = 1;
	int n = 5;
	char desc[80];
	char convert;
	printf("Value of N  Description  Factorial\n");
	while(n > 0){
		factr = 1;
		int a = 0;
		for (int i = n ; i >= 1; --i){
			/*snprintf(desc, 80, "%d", i);*/
			itoa(i,number,
			strcpy(desc[a++],i);
			/*desc[a++] = '*';*/
		factr = factr * i;
		}
		printf("\n%-10d",n);
	      	printf("       %s  ",desc);
	      	printf("%9ld",factr); 
	       	n--;	
	}
	printf("\n%c",convert);
}	
