#include <stdio.h>
#include <stdlib.h>

int main(){
	int N1, N2, N3;
	printf("\nType three numbers to be compared\n");
	scanf("%d %d %d",&N1, &N2, &N3);
/*######################################*/
	if(N1 == 0 && N2 == 0 && N3 == 0){
		printf("All N1, N2, N3 are 0, please Enter valid number\n");
	}
/*######################################*/
	else if(N1 == N2 && N1 == N3 && N2 == N3){
		printf("N1 N2 N3 (%d) are equal numbers\n",N1);
	}
/*######################################*/
	else if(N1 == N2){
		/*printf("Both N1: %d and N2: %d are equal and greater than N3: %d \n", N1, N2, N3);*/

		if(N1 > N3){
			printf("N1: %d and N2 %d are greater\n",N1, N2);
		}
		else{
			printf("N3: %d is greater\n", N3);
		}
	}

	else if(N1 == N3){
                /*printf("Both N1: %d and N2: %d are equal and greater than N3: %d \n", N1, N2, N3);*/

                if(N1 > N2){
                        printf("N1: %d and N3: %d are greater\n",N1, N3);
                }
                else{
                        printf("N2: %d is greater\n", N2);
                }
        }
	else if(N2 == N3){
                /*printf("Both N1: %d and N2: %d are equal and greater than N3: %d \n", N1, N2, N3);*/

                if(N2 > N1){
                        printf("N2: %d and N3: %d are greater\n",N2, N3);
                }
                else{
                        printf("N1: %d is greater\n", N1);
                }
        }
/*#############################################*/
	else{

		if(N1 > N2){
			if(N1>N3){
				printf("N1: %d is the greatest number\n",N1);
			}
			else{
				printf("N3: %d is the greatest number\n",N3);
			}
		}

		else if(N2 > N3){
			printf("N2: %d is the greatest number\n",N2);
		}

		else{
			printf("N3: %d is the greatest number\n",N3);
		}

	}
}
