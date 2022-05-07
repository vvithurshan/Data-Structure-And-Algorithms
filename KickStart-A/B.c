#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r);
 
// The main function that prints all combinations of size r
// in arr[] of size n. This function mainly uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    int data[r];
 
    // Print all combination using temporary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 
 // arr[]  ---> Input Array
 //   data[] ---> Temporary array to store current combination
 //   start & end ---> Starting and Ending indexes in arr[]
 //   index  ---> Current index in data[]
 //   r ---> Size of a combination to be printed 
void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r)
{
    // Current combination is ready to be printed, print it
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
 
    // replace index with all possible elements. The condition
    // "end-i+1 >= r-index" makes sure that including one element
    // at index will make a combination with remaining elements
    // at remaining positions
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
///solve

void solve(int num){
	int array[100000];
	int a = 0;
	while(num > 0) //do till num greater than  0
    {
        int mod = num % 10;  
        array[a++] = mod;
    
        num = num / 10;   
    }
    int sum = 0;
    for ( int i = 0; i < a; ++i){
    	// printf("%d\n",array[i]);
    	sum += array[i];
    }

    for ( int i = 0; i < 10; ++i){
    	if ( (sum + i) == 9){
    		array[a++] = i;
    		break;
    	}
    }

    // printf("%d",a);
    int arr[5] = {1, 2, 3, 4, 5};
    printCombination(arr, 5, 4 );
    // for ( int i = 0; i < a; ++i){
    // 	printf("%d ",array[i]);
    // }
}
int main(){
	int tt, num;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		scanf("%d",&num);
		printf("Case #%d: ",tc);
		solve(num);
		printf("\n");
	}
	return 0;
}
