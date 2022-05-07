#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int arr[], int n, int k){
    int total = 0;
	for ( int i = 0; i < n ; ++i){
	    total += arr[i];
	}
	printf("%d",(total%k));
}

int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		int n, k;
		scanf("%d %d",&n,&k);
		int *array;
		array = malloc(n * sizeof(int));
		for ( int i = 0; i < n; ++i ){
			scanf("%d",&array[i]);
		}
		printf("Case #%d: ",tc);
		solve(array, n, k);
		printf("\n");
	}
	return 0;
}