#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(char *s){
	int len = strlen(s);
	// printf("%d",len);
	if ( s[ len - 1] == 'y' || s[ len - 1] == 'Y')
		printf("%s is ruled by nobody.",s);

	else {
		if ( s[len - 1] == 'A' || s[len - 1] == 'a' || s[len - 1] == 'E' || s[len - 1] == 'e' || s[len - 1] == 'I' || s[len - 1] == 'i' || s[len - 1] == 'O' || s[len - 1] == 'o' || s[len - 1] == 'U' || s[len - 1] == 'u')
			printf("%s is ruled by Alice.",s);
		else
			printf("%s is ruled by Bob.",s);
	}
}

int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		char s[101];
		scanf("%s",s);
		printf("Case #%d: ",tc);
		solve(s);
		printf("\n");
	}
	return 0;
}
