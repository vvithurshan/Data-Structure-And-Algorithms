#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, a, d;
	char s[100000];
	scanf("%d",&N);
	scanf("%s",s);
	a = 0;
	d = 0;
	for ( int i = 0; s[i] != '\0'; ++i){
		if(s[i] == 'A')
			a++;
		else
			d++;
	}
	if( a == d )
		printf("Friendship");
	else if( a > d )	
		printf("Anton");
	else
		printf("Danik");	
	return 0;
}
