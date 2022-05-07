#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BinarySearch(int array[], int n, int key){
	int l = 0;
	int h = n - 1;

	while(l <= h){
		int mid = (l + h)/2;
		//printf("%d \n",mid);
		if ( array[mid] == key)
			return mid;
		else if ( array[mid] < key)
			l = mid + 1;
		else if ( array[mid] > key)
			h = mid - 1;
	}
	return -1;
}
int main(){
	int array[20] = {4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43};
	printf("%d \n",BinarySearch(array, 15, 25));
	return 0;
}
