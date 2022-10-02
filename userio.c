#include <stdio.h>
#include <stdlib.h>

// getting user input scanf
int main()
{
/*
// to get int
int num;
printf("Enter the number\n");
scanf("%d", &num);
printf("Number is %d\n", num);

// to get double value
double number;
printf("Enter the number\n");
scanf("%lf", &number);
printf("Number is %f\n", number);


// character
char ch;
printf("Enter the letter\n");
scanf("%c", &ch);
printf("Letter is %c\n", ch);
*/

char word[40]; // 40 letters can be stored
printf("Enter your name\n");
//scanf("%s", word); doesn't require & sign in front of word
fgets(word, 40, stdin); // to get the input with space
printf("your name is %s\n", word);
return 0;
}
