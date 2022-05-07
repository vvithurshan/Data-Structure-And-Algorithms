#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, ex, en, total, max;
	scanf("%d",&n);
	max = 0;
	total = 0;
	while(n--){
		scanf("%d %d",&ex, &en);
		total = total + en - ex;
		if( total > max ){
			max = total;
		}
	}
	printf("%d",max);
	return 0;
}
