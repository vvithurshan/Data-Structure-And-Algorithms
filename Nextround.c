#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, k;
	scanf("%d %d", &n, &k);
	int array[n];
	// printf("%d %d", n, k);

	for (int i = 0; i < n; ++i){
		scanf("%d", &array[i]);
	}
	// printf("%d",array[2]);
	return 0;
}