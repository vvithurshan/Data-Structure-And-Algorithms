#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// it is sorted?
void prefix(int arr[], int n);
void Asorted(int arr[], int n);
void ISsorted2(int arr[], int n);
void ISsorted(int arr[], int n);
void postfix(int arr[], int n);


void Asorted(int arr[], int n){
	int a = -1;
	for(int i = 0; i < n - 1 ; ++i){
		if(arr[i] > arr[i+1]){
			a = 0;
			break;
		}

	}		
	if ( a == 0){
		prefix(arr, n);
	}
	else{
		printf("NO\n");
	}
}

void prefix(int arr[], int n){
	// for ( int i = 0; i < n ; ++i){
	// 	printf("%d", arr[i]);
	// }
	int temp;
	if ( arr[0] > arr[1]){
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
	ISsorted(arr, n);
}


void ISsorted(int arr[], int n){
	int b = -2;
	for(int i = 0; i < n - 1 ; ++i){
		if(arr[i] > arr[i+1]){
			b = 0;
			break;
		}

	}	
	if ( b == 0){
		printf("YES\n");	
		}
	else{
		postfix(arr, n - 1);
	}
}

// post

void postfix(int arr[], int n){
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
	ISsorted2(arr, n + 1);
}

void ISsorted2(int arr[], int n){
	int c = -3;
	for(int i = 0; i < n - 1 ; ++i){
		if(arr[i] > arr[i+1]){
			c = 0;
			break;
		}

	}	
	if ( c == 0){
		printf("YES\n");	
		}
	else{
		printf("NO\n");
	}
}

int main(){
	int tt, n;
	scanf("%d",&tt);
	while(tt--){
		int *array;
		scanf("%d",&n);
		array = malloc(n * sizeof(int));

		for (int i = 0; i < n; ++i){
			scanf("%d",&array[i]);
		}
		Asorted(array, n);
		// prefix(array, n);
	}


	return 0;
}
///end of program