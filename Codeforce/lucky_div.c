#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	int r;
	int lucky = 0;
	int N = n;
	while( n > 0 ){
		r = n % 10;
		/*printf("%d %d\n",n,r);*/
		/*printf("%d %d\n",n,r);*/
		if(r == 4 || r == 7 ){
			lucky = 1;
			n = n / 10;
			continue;
		}
		else{
			lucky = 0;
			break;
		}
	}

	if(lucky == 1){
		printf("YES");
	}
	else{
		if( N % 4 == 0 || N % 7 == 0){
			printf("YES");
		}
		else if( N % 47 == 0){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}

	return 0;
}
