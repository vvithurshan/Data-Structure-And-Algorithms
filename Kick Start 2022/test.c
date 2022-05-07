#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(char **arr, int n){
		int b_Total = 0;
		int b_row = 0;
		int r_Total = 0;
		int r_column = 0;
		int b_row_Total = 0;
		int r_column_Total = 0;

		// cout << board[0][0];

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				if ( arr[i][j] == 'B'){
					// cout << "BLUE";
					b_Total++;
					b_row++;
				}
				if ( arr[j][i] == 'R'){
					r_Total++;
					r_column++;
					// cout << "RED";
				}
				if ( j == (n - 1)){
					if ( b_row == n ){
						b_row_Total++;
						// cout << "1";
					}
					if(r_column == n )
						r_column_Total++;
					
					b_row = 0;
					r_column = 0;
				}
			}
		}
		// cout << r_column_Total;
		if(abs(b_Total - r_Total) > 1 || b_row_Total > 1 || r_column_Total > 1 || (r_column_Total != 0 && (r_column_Total == b_row_Total)))
			printf("Impossible");
		else if (b_row_Total == 1)
			printf("Blue wins");
		else if (r_column_Total == 1)
			printf("Red wins");
		else
			printf("Nobody wins");
}


void printarr(char **arr, int n){
	for (int i = 0;i < n; ++i){
		for ( int j = 0; j < n; ++j){
			printf("%c",arr[i][j]);
		}
	}
}

int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		int n;
		scanf("%d",&n);
		char *array[n];
		for ( int i = 0; i < n; ++i){
			array[i] = (char *)malloc(n * sizeof(char));
		}
		
		for ( int i = 0; i < n; ++i ){
			scanf("%s",array[i]);
//			for ( int j = 0; j < n ; ++j){
//				scanf("%c",array[i][j]);
//			}
		}
		printf("Case #%d: ",tc);
		solve(array, n);
		//printarr(array, n);
		printf("\n");
	}
	return 0;
}
