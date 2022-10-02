//K-Goodness String

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Answer is correct

int main(){
	int T, K, i;
	long N;
	char S[1000000];
	scanf("%d\n", &T);
	// printf("%d %d %d \n%s", T, N, K, S);

	for (int t = 1 ; t <= T; ++t){
		printf("Case #%d: ", t);
		scanf("%ld %d\n%s", &N, &K, S);
		// scanf("%d %d\n", &N, &K);
		// scanf("%s", S);

		int count = 0;
		for (i = 0 ; i <= (N-1)/2 ; ++i){
			if(S[i] != S[(N-1)-(i+1)+1]){
				count++;
			}
		}
		
		int diff = abs(count - K);
		printf("%d\n",diff);
	}
	return 0;
}