#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[101];
	char s2[101];
	scanf("%s",s);
	scanf("%s",s2);
	int a, b;
	for ( a = 0; s[a] != '\0'; ++a);

	for ( b = 0; s2[b] != '\0'; ++b);

	int same = 0;
	for ( int i = 0; i < a; ++i){
		if( a != b ){
			printf("NO");
			break;
		}
		if(s[i] == s2[a-1-i]){
			same = 1;
			continue;
		}
		else{
			printf("NO");
			same = 0;
			break;
		}
	}
	if(same == 1){
		printf("YES");
	}

	return 0;
}
