#include <stdio.h>
#include <stdlib.h>

// find the largest number in the array
int LargestNum(int array[], int length);
int SumOfArray(int array[], int length);
int Minimum(int array[], int length);
int main()
{
	int array[10] = {200, 5, 6, 19, 56, 19, 45, -10, 43, 78};
	int length = sizeof(array)/sizeof(array[0]);
	int max = LargestNum(array, length);
	int sum = SumOfArray(array, length);
	int min = Minimum(array, length);
	printf("The maximum number is %d\n",max);
	printf("The sum of the array is %d\n", sum);
	printf("The minimum of the array is %d\n", min);
	return 0;
}

int LargestNum(int array[], int length){
	int max = array[0];
	// printf("%d\n",length);

	for (int i = 1; i < length; ++i)
	{
		if (array[i] > max)
		{
			max = array[i]; 
		}
	}
	// printf("%d\n",max);
	return max;
}

int SumOfArray(int array[], int length){
	int sum = 0;

	for (int i = 0; i < length; ++i)
	{
		sum = sum + array[i];
	}
	return sum;
}


int Minimum(int array[], int length){
	int min = array[0];
	// printf("%d\n",length);

	for (int i = 1; i < length; ++i)
	{
		if (array[i] < min)
		{
			min = array[i]; 
		}
	}
	// printf("%d\n",max);
	return min;
}