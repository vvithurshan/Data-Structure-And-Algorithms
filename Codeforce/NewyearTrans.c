#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ans(int arr[], int tt){
	int i = 1;
	int ans = 0;
	while ( i < tt){
		i += arr[i - 1];
		if ( i == tt){
			ans = 1;
			break;
		}
		if ( i > tt)
			break;
	}

	if ( ans == 0 )
		printf("NO");
	else
		printf("YES");
}

int main(){
	int n, tt;
	scanf("%d %d",&n, &tt);
	int *array = malloc((n - 1 	) * sizeof(int));

	for (int i = 0; i < n - 1; ++i){
		scanf("%d",&array[i]);
	}
	//printf("%d",n);
	// for ( int i = 0 ; i < n - 1 ; ++i){
	// 	printf("%d",array[i]);
	// 	//printf("%d",i);
	// }

	ans(array, tt);
	return 0;
}
