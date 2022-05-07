#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[1001];
	scanf("%s",name);
	for(int i = 0; name[i] != '\0'; ++i){
		if(i == 0){
			if(name[i] >= 'A' && name[i] <= 'Z'){
				printf("%c",name[i]);
				continue;
			}
			char n = name[i] - 32;
			printf("%c",n);
			continue;
		}
		printf("%c",name[i]);
	}
	
	return 0;
	}
