#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap( int arr[], int i, int j, int x, int y){
	arr[i] = x; 
	arr[j] = y;
}

int sum(int arr[], int n){
	int 	sum = 0;
	for ( int i = 0; i < n; ++i){
		sum += arr[i];
	}

	return sum;
}

void print(int arr[], int n){
	for ( int i = 0; i < n; ++i){
		printf("%d ",arr[i]);
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
		// 1.
		int minimum = sum(array, n);
	//2.
		for ( int i = 0 ; i < n - 1; ++i){
			for ( int j = i + 1; j < n ; ++j){
				for ( int k = 0 ; k < array[j]; ++k){
					for ( int l = k + 1; l <= array[j]; ++l){
						if ( (array[i] || array[j] == ( (k )|| (l)) )){
							//printf("i = %d   j = %d\n", i, k);
							//	print(array, n);
							swap(array, i, j, k, l );
							int min = sum(array, n);
							if( min < minimum){
								minimum = min;
							}
						}	
					}					
				}

			}		
		}	
		//print(array, n);
		printf("%d\n",minimum);
	}
	return 0;
}
