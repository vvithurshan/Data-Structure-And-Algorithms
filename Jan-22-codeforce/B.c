#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t, l, r, k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&l, &r, &k);
		long long array[10000000000];
		long long array2[10000000000];

		for ( long long i = l ; i < r; ++i){
			array[i] = i;
		}
		int size = sizeof(array)/sizeof(a[0]);
		int check = 0;
		for ( int i = 0; i < size - 1 ; ++i){
			for (int j = i + 1 ; j < size ; ++j){
				check = array[i] * array[j];
			}
			for ( int k = 0; k < size - 1; ++k){
				if ( k == i){
					array2[k] = check;
					continue;
				}
				if ( k == j){
					array2[k] = 0;
					continue;
				}
				array2[k] = array[k];

			}
			int correct 0;
			for ( int p = 0 ; p < size - 2 ; ++p){
				for ( int q = p + 1; q < size -1 ; ++q){
					for ( int g = 1 ; g <= array2[p] && g <= array2[q];++g){
						if(array2[p]%g==0 && array2[q]%g==0){
							correct = g;
						}
					}
				}
			}
		}

	}

}
