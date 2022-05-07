#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char name[101];
	scanf("%s",name);
	char array[101];
	int a = 0;
	char temp;
	int present;
	for(int i = 0; name[i] != '\0'; ++i){
		present = 0;
		if(i == 0){
			array[a++] = name[i];
			continue;
		}
		temp = name[i];
		for (int j = 0; array[j] != '\0'; ++j){
			if(temp == array[j])
				present = 1;
		}
		if(present != 1){
			array[a++] = temp;
			}
	}

	if(a % 2 == 0){
		printf("CHAT WITH HER!");
	}
	else{	
		printf("IGNORE HIM!");
	}
}	
