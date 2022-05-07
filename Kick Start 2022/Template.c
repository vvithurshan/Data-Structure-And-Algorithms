#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int arr[], int n){
	
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
