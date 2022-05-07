#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://codeforces.com/contest/1629/problem/B
/// rank 15163
void sorting(int *arr1, int *arr2, int n );
void sorting(int *arr1, int *arr2, int n ){
	int swap, swap2;
	for( int i = 0; i < n -1; ++i){
		for(int j = 0; j < n -1 - i; ++j){
			if(arr1[j] > arr1[j+1]){
				swap = arr1[j];
				swap2 = arr2[j];
				arr1[j] = arr1[j+1];
				arr2[j] = arr2[j+1];
				arr1[j+1] = swap;
				arr2[j+1] = swap2;
			}
		}
	}
}

int main(){
	int t,n,k,a,b;
	scanf("%d",&t);
	while(t--){
		int *array_a;
		int *array_b;
		scanf("%d %d",&n, &k);
		array_a = malloc(n * sizeof(int));
		array_b = malloc(n * sizeof(int));

		for (int i = 0; i < n; ++i){
			scanf("%d",&array_a[i]);
		}
		for (int i = 0; i < n; ++i){
			scanf("%d",&array_b[i]);
		}

		// array sorting
		sorting(array_a, array_b, n);

		for ( int i = 0; i < n; ++i){
			if( array_a[i] <= k){
				k = k + array_b[i];
			}
		}
		// printf("Answer");
		printf("%d\n",k);

	}
	return 0;
}
