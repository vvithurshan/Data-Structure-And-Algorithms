#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int *sorting(int arr[55],int n){
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
	char sum[100];
	int array[55];
	char a = 0;
	scanf("%s",sum);

	for (int i = 0 ; sum[i] != '\0' ; ++i){
		if(sum[i] != '+'){
			array[a++] = sum[i] - '0';
		}
	}
	int *sorted = sorting(array, a);
	
	for ( int i = 0; i < a; ++i){
		printf("%d", sorted[i]);
		if(i == a-1)
			break;
			
		printf("+");
		}
	
}
