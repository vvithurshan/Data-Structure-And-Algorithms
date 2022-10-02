#include <stdio.h>
#include <stdlib.h>

// If else statement
int main()
{
int num1 = 40;
int num2 = 120;
int num3 = 60;

if(num1>num2){
	if(num1>num3){
		printf("Num1 is greater\n");
	}
	else{
		printf("Num3 is greater\n");
	}
}

else if(num2>num3){
		printf("Num2 is greater\n");
}

else{
		printf("Num3 is greater\n");
}

///
printf("##############\n");

if(num1 > num2 && num1 > num3){
		printf("Num1 is greater\n");
}
else if(num2 > num1 && num2 > num3){
		printf("Num2 is greater\n");
}
else{
		printf("Num3 is greater\n");
}
return 0;
}
