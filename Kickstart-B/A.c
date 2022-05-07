#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int R, int A, int B){
	double Total = 0;
	double area_A, area_B;
	double pi = 3.1415926535;
	int r = R;

	while( r != 0){
		// r = r / bb;
		area_A = pi * r * r;
		r = r * A;
		area_B = pi * r * r;
		r = r / B;
		Total = Total + area_A + area_B;
	}
	printf("%f",Total);
		
}
int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		int A, B;
		int R;
		scanf("%d %d %d", &R, &A, &B);
		printf("Case #%d: ",tc);
		solve(R, A, B);
		printf("\n");
	}
	return 0;
}
