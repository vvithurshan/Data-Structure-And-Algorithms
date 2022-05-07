#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void solve(char s[][], int n){
	// for (int i = 0; i < n; ++i){
	// 	for ( int j = 0; j < n; ++j){
	// 		printf("%c",arr[i][j]);
	// 	}
	// }
// }

int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		int n;
		scanf("%d",&n);
		// char *array;
		// array = malloc(n * sizeof(char));
		// for ( int i = 0; i < n; ++i ){
		// 	for ( int j = 0; j < n ; ++j){
		// 		scanf("%d",&array[i][j]);
		// 	}
		// }

		char s[n][n];
		for (int i = 0; i < n; ++i){
			scanf("%s",s[i]);
		}
		printf("Case #%d: ",tc);
		// solve(s, n);
		// printf("\n");
		int b_Total = 0;
		int b_row = 0;
		int r_Total = 0;
		int r_column = 0;
		int b_row_Total = 0;
		int r_column_Total = 0;

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				if ( s[i][j] == 'B'){
					b_Total++;
					b_row++;
				}
				if ( s[j][i] == 'R'){
					r_Total++;
					r_column++;
				}
				if ( j == (n - 1)){
					if ( b_row == n - 1)
						b_row_Total++;
					if(r_column == n - 1)
						r_column_Total++;
					
					b_row = 0;
					r_column = 0;
				}
			}
		}
	}
	return 0;
}
