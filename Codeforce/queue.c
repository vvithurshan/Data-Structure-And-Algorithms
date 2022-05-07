#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, t;
	char s[50];
	char swap;
	int array[50];
	int a = 0;
	scanf("%d %d",&n,&t);
	scanf("%s",s);
	while(t--){
		for ( int i = 0; s[i] != '\0'; ++i){
			if(s[i] == 'B' && s[i+1] == 'G' && s[i+1] != '\0'){
				swap = s[i];
				s[i] = s[i+1];
				s[i+1] = swap;
				i++;
			}
		}
	}
	
		for ( int i = 0; s[i] != '\0';++i){
			printf("%c",s[i]);
		}
}
