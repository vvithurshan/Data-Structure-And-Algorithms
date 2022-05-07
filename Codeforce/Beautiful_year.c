#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int* array, int a);
int distinct(int* array, int a);
int separation(int y);

int separation(int y){
	int r;
	int array[10];
	int a = 0;
	while(y > 0){
		r = y % 10;
		array[a++] = r;
		y = y / 10;
	}
	return reverse(array, a); 
}

int reverse(int* array	, int a){
	int reversed[10];
	for ( int i = 0; i < a; ++i){
		reversed[i] = array[a - 1 - i];
	}
	return distinct(reversed, a);
}

int distinct(int* array, int a){
	
	int final = 1;
	for ( int i = 0; i < a - 1; ++i){
		for ( int j = i + 1; j < a; ++j){
			if(array[i] != array[j]){
				continue;
			}
			else
			{
				final = 0;
			}
		}
	}
		return final;
}

int main(){
	int y;
	int ans;
	scanf("%d",&y);
	y++;
	while(ans != 1){
		ans = separation(y);
		if ( ans == 0 )
			ans = separation(y++);
		else{
			printf("%d",y);
			break;
		}
		
	}

	return 0;
}
