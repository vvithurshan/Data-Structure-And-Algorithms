#include <stdio.h>
#include <stdlib.h>

// Functions - to store a block of code
void printNum(int num);
int main() // it returns a int value
{
printNum(20); // calling a function
printNum(25);
return 0;
}

void printNum(int num){
//int num = 10;
printf("Number: %d\n", num);
printf("Previous: %d\n", num-1);
printf("Next: %d\n", num+1);
}
