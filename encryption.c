#include <stdio.h>
#include <string.h>
int main(){
	int length, encryp;
	char word[80];

	printf("\nType your word to be encrypted: ");
	scanf("%[^\n]s",word);
	/*gets(word);*/
	length = strlen(word);
	printf("%s %d\n",word, length);

	for(int i = 0; word[i] != '\0'; ++i){
		encryp = word[i] - 1;
		printf("%c",encryp);
	}
	printf("\n");

}
