#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int issorted(int arr[], int n){
	int sorted = 1;
	for(int i = 0; i < n - 1 ; ++i){
		if(arr[i] > arr[i+1]){
			sorted = 0;
			break;
		}

	}		
	return sorted;
}

void prefix(int arr[], int n){
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
}

void postfix(int arr[], int start, int n){
	int swap;
	for ( int i = n - 1; i > start + 1; --i){
		for ( int j = n - 1; j > start - 1; --j){
			if ( arr[j] < arr[j - 1]){
				swap = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = swap;
			}
		}
	}
}


int main(){
	int tt, n;
	scanf("%d",&tt);
	while(tt--){
		int *array;
		int a = 0;
		int Asorted = 0;
		scanf("%d",&n);
		array = malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i){
			scanf("%d",&array[i]);
		}
		if (issorted(array, n)){
			//printf("NO\n");
			Asorted = 1;
		}

		else{
			for ( int len = 0; len < n -1 ; ++len){
				prefix(array, len);
				postfix(array, (n - 1) - len, n);
				if ( !issorted(array, n)){  // no > 0
					a = 1;
					break;
				}
			} 
			
		}
		if ( Asorted == 1)
			printf("NO\n");
		else if ( a == 1)
			printf("YES\n");
		else if ( a == 0)
			printf("NO\n");
	}

	return 0;
}
