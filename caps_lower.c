#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void caps(char Name[30]){

	for(int i = 0; Name[i] != '\0'; ++i){
		if(Name[i] >= 'a' && Name[i] <= 'z')
		{
			Name[i] = Name[i] - 32;
		}
	}
	printf("Your name in Caps letter: %s\n",Name);
}

void lower(char name[30]){
	for(int i = 0; name[i] != '\0'; ++i){
		if(name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] = name[i] + 32;
		}
	}
	printf("Your Name in Lower letter: %s\n",name);
}
int main(){
	char name[30];
	printf("Enter Your Name: ");
	scanf("%[^\n]s",name);
	caps(name);
	lower(name);
	return  0;
}
