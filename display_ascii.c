#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char string[80];
	printf("Type your Character: ");
	scanf("%[^\n]s",string);
	printf("\n");
	for(int i = 0; string[i] != '\0'; ++i){
		printf("%c %d\n",string[i],string[i]);
	}
	int i = 0;
	while(string[i]){
	}
	return 0;
}
