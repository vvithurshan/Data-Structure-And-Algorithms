#include <stdio.h>
#include <stdlib.h>

int main(){
	int A;
	printf("Type your Password\n");
	scanf("%d",&A);

	switch(A){
		case 1:
			printf("A\n");
			break;
		case 2:
			printf("B\n");
                        break;
                case 3:
                        printf("C\n");
                        break;
                case 4:
                        printf("D\n");
                        break;
		default:
			printf("Password is wrong\n");
	}

}
