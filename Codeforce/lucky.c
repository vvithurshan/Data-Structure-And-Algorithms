#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long long n;
	int r, lucky;
	lucky = 0;
	scanf("%lld",&n);
	while(n > 0){
		r = n % 10;
		if(r == 4 || r == 7)
			lucky++;
		n = n / 10;
	}

	if(lucky == 4 || lucky == 7)
		printf("YES");
	else
		printf("NO");
	return 0;
}
