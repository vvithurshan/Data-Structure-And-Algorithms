#include <stdio.h>
#include <stdlib.h>

int main(){
	long x;
	scanf("%ld",&x);
	if( x % 5 == 0 )
		printf("%ld",x/5);
	else
		printf("%ld",x/5+1);
	return 0;
}
