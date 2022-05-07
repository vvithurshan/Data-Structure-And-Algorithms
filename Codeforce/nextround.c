#include <stdio.h>

int main(){
	int n, k, count, score, array[50];
	scanf("%d %d\n",&n,&k);
	count = 0;
	for(int i = 0; i < n; ++i){
		scanf("%d",&array[i]);
	}
    for(int i = 0; i < n; ++i){
        if(array[i] > 0 && array[i] >= array[k-1])
            count++;
    }
    printf("%d",count);
	return 0;
}
