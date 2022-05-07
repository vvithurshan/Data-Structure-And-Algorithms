#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ISsorted(int arr[], int n){
	for(int i = 0; i < n - 1 ; ++i)
		if(arr[i] > arr[i+1])
			return 0;
	return 1; // it is sorted 
}

int find(int arr[], int n){
	for ( int i = 0; i < n - 1; ++i){
		if ( (abs(arr[i] < abs(arr[i+1]))))
			return i;
	}
	return -1;
}

int main(){
	int t, n;
	scanf("%d",&t);
	while (t--){
		int *A;
		scanf("%d",&n);
		A = malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i){
			scanf("%d",&A[i]);
		}
		if(ISsorted(A, n)){
			printf("YES\n");
		}
		else {
			int Ans = find(A, n);
			if (Ans){
				int i = 0;
				int j = n - 1;
				while ( i <= Ans && j > Ans){
					while(A[i] < 0 && A[i] != 0)
						i++;
					while(A[j] > 0 && A[j] != 0)
						j--;
					A[i] *= -1;
					A[j] *= -1;
					i++;
					j--;
				}
				if(ISsorted(A, n))
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
				printf("NO\n");
		}
	}
	return 0;
}
