#include <stdio.h>
#include <stdlib.h>

// to get the reference point of the variable in ram
int main(){
	int a = 20;
	printf("%p\n",&a);
	// to store the address in a variable
	int * a_address = &a; // pointer variable
	char letter = 'a';
	char * letter_address = &letter;
	
	// access the data stored in ram using pointer
	printf("%d\n", *a_address);
	/// or 
	printf("%d\n", *&a);
	
	printf("%p\n", &*&a);
	
	printf("%c\n", *letter_address);
	// or 
	printf("%c\n", *&letter);
	return 0;
}
