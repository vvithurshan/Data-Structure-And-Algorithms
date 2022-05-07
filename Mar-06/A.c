#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int tt, n;
	scanf("%d",&tt);
	while(tt--){
		scanf("%d",&n);
		int *array = malloc(n * sizeof(int));
		for ( int i = 0; i < n ; i++){
			scanf("%d",&array[i]);
		}
		int same = 0;
		for ( int i = 0; i < n - 1; ++i){
			if ( (array[i] == 1) && (array[i + 1] == 1))
				same++;
		}
		printf("%d\n",n - 1 - same);

	}

	return 0;
}
