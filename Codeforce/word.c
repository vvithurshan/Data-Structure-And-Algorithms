#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Upper(char arr[101]){
	char U;
	for(int i = 0; arr[i] != '\0'; ++i){
		if(arr[i] >= 'A' && arr[i] <= 'Z'){
			printf("%c",arr[i]);
		}
		else{
			U = arr[i] - 32;
			printf("%c",U);
		}
	}
}
void Lower(char arr[101]){
	for (int i = 0; arr[i] != '\0'; ++i){
		if(arr[i] >= 'a' && arr[i] <= 'z'){
			printf("%c",arr[i]);
		}
		else{
			printf("%c",arr[i] + 32);
		}
	}
}


int main(){
	char string[101];
	scanf("%s",string);
	int upper = 0;
	int length;
	for (length = 0; string[length] != '\0';++length);

	for ( int i = 0; string[i] != '\0'; ++i){
		if(string[i] >= 'A' && string[i] <= 'Z'){
			upper++;
		}
	}
	if(upper > length/2.0)
		Upper(string);
	else
		Lower(string);
	return 0;
	
}
