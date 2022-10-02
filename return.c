#include <stdio.h>
#include <stdlib.h>

// Functions - to store a block of code
// Returning something from a function
void printNum(int num);
int addNumbers(int Num1, int Num2);
int main() // it returns a int value
{
printNum(20); // calling a function
printNum(25);
printf("Addition: %d\n",addNumbers(23,23));
return 0;
}

void printNum(int num){
//int num = 10;
printf("Number: %d\n", num);
printf("Previous: %d\n", num-1);
printf("Next: %d\n", num+1);
}

int addNumbers(int Num1, int Num2)
{
//printf("%d\n",Num1+Num2);
return Num1+Num2;
}
