#include <stdio.h>
#include <stdlib.h>

int main(){
	int row;
	char temp;
	char color[51];
	int start = 0;
	char array[51];
	int a = 0;
	scanf("%d",&row);
	scanf("%s",color);
	for(int i = 0; color[i] != '\0'; ++i){
		start++;
		if(i == 0){
			array[a++] = color[i];
			continue;
		}
		temp = color[i];
		if(temp == array[a-1]){
			continue;
		}
		array[a++] = color[i];
	}
	printf("%d",start - a);
	return 0;
}
