#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ans(int x);
int T;
int ans(int x){
	long b = 1;
	while(b <= x){
		b *= 2;
	}
	b /= 2;
	T++;
	if(b == x)
		return T;
	if (x - b == 1){
		T++;
		return T;
	}
	ans(x - b);
	return T;
}
int main(){
	long x;
	int total;
	scanf("%ld",&x);
	printf("%d",ans(x));
	return 0;
}
