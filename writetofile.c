#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE * file = fopen("text.txt", "w"); // w - write mode 
	// write mode will overwirite everthing you write before
	// but "a" mode doesn't overwrite the previously written value
	fprintf(file, "Vithurshan\nVithurshan"); 
	fclose(file); // need to close the opened file
	return 0;
}
