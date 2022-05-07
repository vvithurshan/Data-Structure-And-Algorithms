#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

string FindBoardStatus(int n, char (*board)[100]) {
  // TODO: Complete this function to find the status of the board.
		int b_Total = 0;
		int b_row = 0;
		int r_Total = 0;
		int r_column = 0;
		int b_row_Total = 0;
		int r_column_Total = 0;

		// cout << board[0][0];

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				if ( board[i][j] == 'B'){
					// cout << "BLUE";
					b_Total++;
					b_row++;
				}
				if ( board[j][i] == 'R'){
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
			cout << "Impossible";
		else if (b_row_Total == 1)
			cout << "Blue wins";
		else if (r_column_Total == 1)
			cout <<"Red wins";
		else
			cout <<"Nobody wins";
  return "";
}

int main() {
  int t;
  cin >> t;
  for (int tc = 1; tc <= t; ++tc) {
    int n;
    cin >> n;
    char board[100][100];
    for (int r = 0; r < n; ++r) {
      for (int c = 0; c < n; ++c) {
        cin >> board[r][c];
      }
    }
    // cout << endl;
    cout << "Case #" << tc << ": " << FindBoardStatus(n, board) << endl;
  }
  return 0;
}
