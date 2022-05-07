#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *sort(int* arr, int n){
	int swap;
	for( int i = 0; i < n -1; ++i){
		for(int j = 0; j < n -1 - i; ++j){
			if(arr[j] < arr[j+1]){
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
	return arr;
}
	
int main(){
	int n;
	int array[101];
	int a = 0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&array[a++]);
	}	
	int *sorted = sort(array, a);
	int total = 0;
	for ( int i = 0; i < a; ++i){
		total += sorted[i];
	}

	int needed = 0;
	int count = 0;
	for ( int i = 0; i < a; ++i){
		needed += sorted[i];
		total -= sorted[i];
		count++;
		if(needed > total)
			break;
	}
	printf("%d",count);
	
	return 0;
}
