#include <stdio.h>
#include <stdlib.h>

/// Switch 
int main(){
/// using if statement

int num;
printf("Type the number\n");
scanf("%d",&num);
printf("Thank you\n");
if(num ==0){
	printf("Zero\n");
}
else if(num ==1){
	printf("One\n");
}
else if(num ==2){
	printf("Two\n");
}
else if(num ==3){
	printf("Three\n");
}

//@2
printf("method 2\n");
switch(num){
	case 0:
		printf("Zero\n");
		break;
	case 1:
		printf("One\n");
		break;
	case 2:
		printf("Two\n");
		break;
	case 3:
		printf("Three\n");
	default:
		printf("Just Type the number lower than 4\n");
}
return 0;
}
