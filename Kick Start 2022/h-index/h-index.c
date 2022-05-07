#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int tt, n, T = 1;
	scanf("%d",&tt);
	while(tt--){
		int *array;
		scanf("%d",&n);
		array = malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i){
			scanf("%d",&array[i]);
		}
		printf("Case #%d: ",T++);
		int previous = 0;
		int current = 1;
		int i = 0;
		while( i < n){
			int count = 0;
			int a = i;
			while( a >= 0){
				if(array[a] >= current)
					count++;
				a--;
			}

			if ( count >= current){
				printf("%d ",current);
				previous = current++;
			}
			else
				printf("%d ",previous);
			i++;
		}
		printf("\n");
	}
	return 0;
}

