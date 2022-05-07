#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long n;
	int k;
	scanf("%ld %d",&n, &k);
	while(k--){
		if( n % 10 == 0){
			n = n / 10;
			continue;
		}
		n--;
	}
	printf("%ld",n);

	return 0;
}
