#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sorting(char arr[100], int n){
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
	char name[101];
	int i;
	scanf("%s",name);
	for (i = 0; name[i] != '\0'; ++i);
	char *array = sorting(name, i);
	int count = 0;
	for (i = 0; array[i] != '\0'; ++i){
		if(array[i] != array[i+1])
			count++;
		}
	
	if(count % 2 == 0){
		printf("CHAT WITH HER!");
	}
	else{	
		printf("IGNORE HIM!");
	}
}	
