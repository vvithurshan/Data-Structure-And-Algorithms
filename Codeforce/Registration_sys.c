#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length = 0;

void ans(char s[][32], char ss[32], int index, int array[]){  
	long match = 0;
	if ( index == 0){
		strcpy(s[length++], ss);
		printf("OK\n");
		//printf("%s %d",s[0], length);
	}

	else{
		for ( int i = 0; i < length; ++i){
			if ( !strcmp(ss, s[i])){
				array[i] += 1;
				match = i + 1;
				break;
			}			
		}

		if (match)
			printf("%s%d\n",ss, array[match - 1]);
		else{
			strcpy(s[length++], ss);
			printf("OK\n");
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	char s[n][32];
	char ss[32];
	int array[n];
	for ( int i = 0; i < n; ++i)
		array[i] = 0;

	for ( int i = 0; i < n ; ++i){
		scanf("%s",ss);
		ans(s, ss, i, array);
	}
	
}