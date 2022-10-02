#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE * file = fopen("text.txt", "r"); // r - read mode
	char line[200];
	fgets(line, 200, file);
	printf("%s",line);
	fclose(file); // need to close the opened file
	return 0;
}
