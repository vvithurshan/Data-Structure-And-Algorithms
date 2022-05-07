#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, size;
	int A[50];
	int i = 0;
	printf("How many Numbers do you have: ");
	scanf("%d",&T);
	size = T;
	while(T){
		printf("\nEnter your Number(%d Remaining) ",T--);
		scanf("%d",&A[i++]);
	}
	int min = A[0];
	i = 1;
	
	while(i < size){
		if(A[i] < min)
			min = A[i];
		i++;
	}
	printf("\nMinimum number is %d\n",min);

	min = A[0];

	for(i = 1; i < size; ++i){
	       if(A[i] < min){
		       min = A[i];
		}
	}
		
	printf("\nMinimum number is %d\n",min);

}
