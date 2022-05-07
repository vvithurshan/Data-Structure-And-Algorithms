#include <stdio.h>
#include <stdlib.h>

int main(){
	int k, w;
	long n;
	scanf("%d %ld %d", &k, &n, &w);
	int temp, total;
	total = 0;
	while(w){
		total += w * k;
		w--;
	}

	int balance = total - n; 
	if((total - n) <= 0)
		printf("0");
	else
		printf("%d",balance);

	return 0;
}
