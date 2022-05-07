#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ans(int array[], int n){
	int odd = 0;
	int odd_index;
	int even = 0;
	int even_index;

	for ( int i = 0; i < n ; ++i){
		if ( array[i] % 2 == 0){
			even++;
			even_index = i;
		}
		else{
			odd++;
			odd_index = i;
		}
	}
	if ( even > odd)
		printf("%d",odd_index + 1);
	else
		printf("%d",even_index + 1	);
}

int main(){
	int n;
	scanf("%d",&n);
	int *array = malloc(n * sizeof(int));

	for ( int i = 0; i < n ; ++i)
		scanf("%d",&array[i]);
	
	ans(array, n);
	return 0;
}
