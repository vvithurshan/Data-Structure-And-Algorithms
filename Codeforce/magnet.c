#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *strcat(char *dest, const char *src);
	long n;
	char s[5];
	scanf("%ld",&n);
	int N = n;
	char last;
	int separate = 1;
	while(n--){
		scanf("%s",s);
		if ( n == (N - 1)){
			last = s[1];
			continue;
			}
		if ( last == s[0] )
			separate++;
		
		last = s[1];
		
		
	}
	printf("%d",separate);

	return 0;
}
