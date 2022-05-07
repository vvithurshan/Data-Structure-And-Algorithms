#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Array {
	int A[20];
	int size;
	int length;
};

void Append(struct Array *arr, int x){
	if ( arr->length < arr->size)
		arr->A[arr->length++] = x;
}

void Display(struct Array *arr){
	for ( int i = 0; i < arr->length; ++i){
		printf("%d ",arr->A[i]);
	}
}

void Insert ( struct Array *arr, int index, int x){
	if ( index >= 0 && index <= arr->length){
		for ( int i = arr->length; i > index; --i)
			arr->A[i] = arr->A[i - 1];
		arr->A[index] = x;
		arr->length++;
	}
}

int Delete ( struct Array *arr, int index){
	int x = 0;
	if ( index >= 0 && index < arr->length){
		for ( int i = index; i < arr->length - 1; ++i)
			arr->A[i] = arr->A[i+1];
		arr->length--;
		return index;
	}
	return 0;
}
int main(){
	struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
	Display(&arr);
	printf("\n");
	//Insert(&arr, 0, 10);
	Delete(&arr, 4);
	Display(&arr);
	return 0;
}
