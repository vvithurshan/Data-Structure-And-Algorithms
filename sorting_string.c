#include <stdio.h>
#include <stdlib.h>

char *sorting(char arr[100],int n){
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
	int swap, i;
	char array[100] = "ABCDEFABCD";
	for (i = 0; array[i] != '\0'; ++i);
	printf("%d",i);
	char *sorted = sorting(array, i);
	for ( int i = 0; i < 10; ++i){
		printf("%c\n",sorted[i]);
	}
}
