#include <stdio.h>
#include <string.h>
int main(){
	char word[20];
	int a, b, c, d, e;
	printf("\nType the word: ");
	scanf("%s",word);
	/*gets(word);*/
	a = word[0] - 30;
	b = word[1] - 30;
	c = word[2] - 30;
	d = word[3] - 30;
	e = word[4] - 30;

	printf("%c%c%c%c%c\n",a,b,c,d,e);

}
