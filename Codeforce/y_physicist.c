#include <stdio.h>
#include <stdlib.h>

int main(){
	int T, X, Y, Z, x, y, z;
	x = y = z = 0;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&X, &Y, &Z);
		x += X;
		y += Y;
		z += Z;
	}
	if(x == 0 && y == 0 && z == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
