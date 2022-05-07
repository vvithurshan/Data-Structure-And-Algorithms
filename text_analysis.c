#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char text[80];
	printf("Enter the text\n");
	scanf("%[^\n]",text);
	int letters = 0;
	int digits = 0;
	int space = 0;
	int other = 0;
	for(int i = 0; text[i] != '\0'; ++i){
		if(text[i] >= 'a' || text[i] <= 'z' || text[i] >= 'A' || text[i] <= 'Z'){
			letters++;
		}
		else if(text[i] >= '0' || text[i] <= '9'){
			digits++;
		}
		else if(text[i] == ' '|| text[i] == '\t' || text[i] == '\n'){
			space++;
		}
		else{
			other++;
		}
	}
	printf("Text: %d\n",letters);	
	printf("Digits: %d\n",digits);
	printf("Space: %d\n",space);
	printf("Other: %d\n",other);

}

