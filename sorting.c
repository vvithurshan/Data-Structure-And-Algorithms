#include <stdio.h>
#include <stdlib.h>

int *sorting(int arr[100],int n){
	int swap;
	for( int i = 0; i < n -1; ++i){
		for(int j = 0; j < n -1 - i; ++j){
			if(arr[j] > arr[j+1]){
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
	return arr;
}
int main(){
	int swap, length;
	int array[100] = {5, 8, 20, 4, 1, 45, 43, 23, 5, 2};
	int *sorted = sorting(array, 10);
	for ( int i = 0; i < 10; ++i){
		printf("%d\n",sorted[i]);
	}
}
