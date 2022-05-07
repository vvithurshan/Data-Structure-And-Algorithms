#include <stdio.h>
#include <stdlib.h>

int main(){
	char option, null;

	do{
		printf("\nInstructions");
		printf("\nDo You want to Repeat it? (Y/N)");
		option = getchar();
		null = getchar();
	} while(option == 'Y' || option == 'y');
	return 0;
}
