#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int T;
	int Number[50];
	int a = 0;
	int temp;
	printf("How many scores you have: ");
	scanf("%d",&T);
	int length = T;
	while(T){
	printf("Enter your scores (%d Remaining): ",T--);
	scanf("%d",&Number[a++]);
	}
	printf("\n");
	int i = 0;
	while(Number[i]){
		printf("%-2d",Number[i]);
		temp = Number[i];
		while(temp--){
			printf("*");
		}
		printf("\n");
		i++;
	}
	return 0;
}
