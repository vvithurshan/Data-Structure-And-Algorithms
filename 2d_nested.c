#include <stdio.h>
#include <stdlib.h>

int main(){
/*
[1, 2, 3
 4, 5, 6
 7, 8, 9]
*/
	int array[3][3] = {{1, 2, 3}, // first row
					  {4, 5, 6}, // second row
					  {7, 8, 9}}; // third row
	
	//printf("%d\n",array[0][0]);
	
	for(int i = 0; i < 3; i++){
		printf("Row %d : ", i);
		for(int a = 0; a < 3; a++){
			printf("%d",array[i][a]);
		}
		printf("\n");
	}
	
	return 0;
}
