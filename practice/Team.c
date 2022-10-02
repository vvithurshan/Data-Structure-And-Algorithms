#include <stdio.h>
#include <stdlib.h>

// Accepted
int main(){
	int T, a, b, c, total;
	scanf("%d",&T);
	total = 0;
	while(T--){
		scanf("\n%d %d %d",&a, &b, &c);
		if((a+b+c) >= 2 )
			total++;
		
	}
	printf("%d",total);
	return 0;
}