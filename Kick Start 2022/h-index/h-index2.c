#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int arr[], int n){
	int count[n + 1];
	for ( int i = 1; i < n + 1; ++i)
		count[i] = 0;

	int current = 1;
	int previous = 0;
	for ( int ii = 0; ii < n; ++ii){
		if ( arr[ii] > n){
			for ( int i = current; i < n + 1; ++i){
				count[i]++;
			}
		}
		else{
			for ( int i = current; i <= arr[ii] ; ++i){
				count[i]++;
			}
		}
	    if ( count[current] >= current){
	    	printf("%d ",current);
	    	previous = current;
	    	current++;
		}

		else{
			printf("%d ",previous);
		}
	}
	// for ( int i = 1 ; i < n + 1; ++i ){
	// 	printf("%d ",count[i]);
	// }
}

int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		int n;
		scanf("%d",&n);
		int *array;
		array = malloc(n * sizeof(int));
		for ( int i = 0; i < n; ++i ){
			scanf("%d",&array[i]);
		}
		printf("Case #%d: ",tc);
		solve(array, n);
		printf("\n");
	}
	return 0;
}
