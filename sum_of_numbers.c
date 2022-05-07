#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int total;
	total = 0;
	for(int i = 2; i < 100; i = i + 3)
		if(i % 5 == 0)
			total = total + i;
	printf("Total is %d\n",total);	
}
