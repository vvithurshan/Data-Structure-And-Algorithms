#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sorting(int *array, int n);
void sorting(int *array, int n){
	int swap;
	for (int i = 0; i < n -1 ; ++i){
		for(int j = 0; j < n - 1; ++j){
			if(array[j] > array[j+1]){
				swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		}
	}
}



int main(){
	int n;
	scanf("%d",&n);
	int *array;
	array = malloc(n * sizeof(int));

	for ( int i = 0; i < n; ++i){
		scanf("%d",&array[i]);
	}

	sorting(array, n);
	for ( int i = 0; i < n; ++i){
		printf("%d ",array[i]);
	}
	return 0;
}
