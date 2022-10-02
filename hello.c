#include <stdio.h>
#include <stdlib.h>

int main()  /* main function This is where the computer looks first to start the programme*/
{
int x = 100;
/*float  = */
double pi = 3.14;
char letter = 'V';/*to store only a one letter(number/symbol/number)*/
char word[] = "I am Vithurshan";
printf("Hello World!\n"); 
printf("I have $%d\n",x); /*to print int %d*/
printf("%d\n",x);

printf("%f\n",pi);
printf("%c\n",letter);
printf("%s\n",word);
printf("put everything together %d %f %c\n", x, pi, letter);
return 0;
}

/*in summary
int %d
double %f
char %c
char[] %s
*/
