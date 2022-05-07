#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[100];
	scanf("%s",s);
	int present = 0;
	for ( int i = 0; s[i] != '\0'; ++i){
		if ( s[i] == 'Q' || s[i] == 'H' || s[i] == '9' ){
			printf("YES");
			return 0;
		}
	}
		printf("NO");

		
	return 0;
}
