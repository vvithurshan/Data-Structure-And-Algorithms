#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	char string[80];
	scanf("%s",string);

	for (int i = 0; string[i] != '\0'; ++i){
		if(string[i] == 'A' || string[i] == 'a' || string[i] == 'E' || string[i] == 'e' || string[i] == 'I'|| string[i] == 'i'|| string[i] == 'O' || string[i] == 'o' || string[i] == 'U' || string[i] == 'u' || string[i] == 'Y' || string[i] == 'y'){
			
		}
		else{
			if(string[i] >= 'A' && string[i] <= 'Z'){
				string[i] = string[i] + 32;
			}
			printf(".");
			printf("%c",string[i]);
		}
	}
}
