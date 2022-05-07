#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 10;
	int array[100];
	int a = 0;
	while( n > 0 ){
		array[a++] = n % 2;
		n /= 2;
	}
	for ( int i = a; i >= 0; --i){
		printf("%d",array[i]);
	}
	return 0;
}
