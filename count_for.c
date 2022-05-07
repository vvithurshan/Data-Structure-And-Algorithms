#include <stdio.h>

int main(){
	int n, total, initial, end,temp;
	printf("\nEnter your initial number: ");
	scanf("%d",&initial);
	printf("\nEnter your final number: ");
	scanf("%d",&end);

	total = 0;

	for(int i = initial; i<=end; ++i){
		total = total + i;
	}
	printf("\nTotal from %d to %d is %d\n",initial,end,total);
}
