#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, h, a;
	scanf("%d %d",&n, &h);
	int min = 0;
	while(n--){
		scanf("%d",&a);
		if( a > h )
			min += 2;
		else
			min += 1;
	}
	printf("%d",min);
	return 0;
}
