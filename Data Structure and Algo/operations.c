#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Array{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr){
	printf("\nElements are\n");
	for ( int i = 0; i < arr.length; ++i)
		printf("%d ",arr.A[i]);
	printf("\n");
}

void Append(struct Array *arr1, int x){
	// put x in a way such that the array is sorted
	if ( arr1->length < arr1->size){
		int i = arr1->length - 1;
		while(i >= 0 && arr1->A[i] > x){
			arr1->A[i+1] = arr1->A[i];
			i--;
		}

		arr1->A[i+1] = x;
		arr1->length++;
	}
}
void Insert(struct Array *arr1, int key, int index){
	if ( arr1->length < arr1->size && index >= 0){
		int i = arr1->length - 1;
		printf("%d",i);
		while ( i >= index){
			arr1->A[i+1] = arr1->A[i];
			i--;
		}
		arr1->A[i+1] = key;
	arr1->length++;
	}
}

void Delete(struct Array *arr1, int index){
	if ( index >= 0 && index < arr1->length){
		int i = index;
		while ( i < arr1->length-1 ){
			arr1->A[i] = arr1->A[i+1];
			i++;
		}
		arr1->length--;
	}
}
struct Array* Union(struct Array *arr1, struct Array *arr2){
	int i, j, k;
		i = j = k = 0;
		struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
		while ( i < arr1->length && arr2->length){
				if ( arr1->A[i] < arr2->A[j])
					arr3->A[k++] = arr1->A[i++];
				else if ( arr2->A[j] < arr1->A[i])
					arr3->A[k++] = arr2->A[j++];
				else{
					arr3->A[k++] = arr1->A[i];
					i++;
					j++;
				}			
		}
		for (; i < arr1->length; ++i)
			arr3->A[k++] = arr1->A[i];
		for ( ; j < arr2->length; ++j)
			arr3->A[k++] = arr2->A[j];
		arr3->length = k;
		arr3->size = 10;
		return arr3;
}

struct Array* Intersection(struct Array *arr1, struct Array *arr2){
	int i, j, k;
	i = j = k = 0;
	struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

	while ( i < arr1->length && j < arr2->length){
		if ( arr1->A[i] < arr2->A[j] )
			i++;
		else if ( arr2->A[j] < arr1->A[i])
			j++;
		else if ( arr1->A[i] == arr2->A[j]){
			arr3->A[k++] = arr1->A[i];
			i++;
			j++;
		}
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}
int main(){
	struct Array arr1 = {{1,3,4,5,6},10,5};
	struct Array arr2 = {{2,3,5,8,9},10,5};
	struct Array *arr3;

	arr3 = Union(&arr1, &arr2);
	Display(arr1);
	// arr3  = Intersection(&arr1, &arr2);
	// Insert(&arr1,50, 2);
	Delete(&arr1, 0);
	Display(arr1);
}
