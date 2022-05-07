#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, a, b;
	scanf("%d",&n);
	int count = 0;
	while(n--){
		scanf("%d %d",&a, &b);
		if( (b - a) >= 2)
			count++;
	}
	printf("%d",count);
	return 0;
}
