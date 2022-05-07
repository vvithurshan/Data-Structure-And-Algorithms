#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char msg[101];
	char current[] = "hello";
	scanf("%s",msg);
	int a, b;
	a = b = 0;
	int i = 0;
	
	while(current[i] != '\0'){
		if(current[i] == msg[a]){
			i++;
			a++;
			if(i == 5){
				printf("YES");
				break;
			}
			continue;
		}
		a++;
		if(msg[a] == '\0'){
			printf("NO");
			break;
		}
	}
	
	return 0;
}
