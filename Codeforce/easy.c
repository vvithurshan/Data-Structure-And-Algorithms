#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ans(int arr[], int n){
	int ans = 0;
	for ( int i = 0; i < n; ++i){
		if(arr[i] == 1){
			ans++;
			break;
		}
	}
	if(ans)
		printf("HARD");
	else
		printf("EASY");

}
int main(){
	int i, size;
	scanf("%d",&size);
	int *v = malloc(size*sizeof(int));
	for ( i = 0; i < size ; ++i){
		scanf("%d",&v[i]);
	}
	ans(v, size);
	return 0;
}
