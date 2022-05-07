#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// void Sort(struct Array *arr);
struct Array
{
	int A[10];
	int length;
	int size;
};
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Display(struct Array Arr){
	for ( int i = 0; i < Arr.length; ++i)
		printf("%d %d\n",i+1,Arr.A[i]);
}

void LeftNegative(struct Array *Arr){
	int i = 0;
	int j = Arr->length - 1;

	while ( i < j){
		while(Arr->A[i] <= 0)
			i++;
		while(Arr->A[j] > 0)
			j--;
		swap(&Arr->A[i], &Arr->A[j]);
		// temp = Arr->A[i];
		// Arr->A[i] = Arr->A[j];
		// Arr->A[j] = temp;
		i++;
		j++;
	}
	// Sort(&Arr);
}

void Sort(struct Array *arr){
	for ( int i = 0; i < arr->length - 1; ++i){
		for ( int j = 0; j < arr->length - i - 1; ++j){
			if ( arr->A[j] > arr->A[j+1])
				swap(&arr->A[j], &arr->A[j+1]);
		}
	}
}

int main(){
	struct Array arr = {{-6,3,-8,10,5,-7,-9,12,-4,2},10,10};
	printf("Arry before sorted\n\n");
	Display(arr);
	LeftNegative(&arr);
	printf("Arry after the arrangement\n\n");
	Display(arr);
	printf("Arry before sorted\n\n");
	Sort(&arr);
	Display(arr);

	return 0;
}