#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int arr[], int n){
	int i, j, temp;
	for ( i = 0; i < n - 1; ++i){
		for ( j = 0; j < n - 1 - i; ++j){
			if ( arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void print(int arr[], int n){
	for ( int i = 0; i < n; ++i){
		printf("%d ",arr[i]);
	}
}

void count(int arr[], int n, int *one, int *two, int *three, int *four){
	for ( int i = 0; i < n; ++i){
		if(arr[i] == 1){
			*one += 1;
		}
		if(arr[i] == 2){
			*two += 1;
		}
		if(arr[i] == 3){
			*three += 1;
		}
		if(arr[i] == 4){
			*four += 1;
		}
	}
}

void ans(int one, int two, int three, int four){
	int taxi = 0;
	taxi += four;
	while(three != 0 && one != 0){
		taxi++;
		three--;
		one--;
	}
	taxi += three;
	while(two > 1){
		taxi++;
		two -= 2;
	}

	while(two != 0 && one > 1){
		taxi++;
		two--;
		one -= 2;
	}

	while(two != 0 && one > 0){
		taxi++;
		two--;
		one--;
	}

	taxi += two;

	while(one >= 4){
		taxi++;
		one -= 4;
	}
	if(one > 0)
		taxi++;

	printf("%d",taxi);
}
int main(){
	int i, size;
	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	scanf("%d",&size);
	int *v = malloc(size*sizeof(int));
	for ( i = 0; i < size ; ++i){
		scanf("%d",&v[i]);
	}
	//free(v);
	//sort(v, size);
	//print(v , size);
	//printf("%d",one);
	count(v, size, &one, &two, &three, &four);
	free(v);
	ans(one, two, three, four);
	return 0;
}
