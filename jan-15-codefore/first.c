#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* https://codeforces.com/contest/1627 */
int main(){	
	int t, n, m,r, c, count,store,column,row;
	char s[50][50];
	char first[100];
	scanf("%d\n",&t);
	while(t--){
		count = 0;
		scanf("%d %d %d %d",&n,&m,&r,&c);
		for ( int i = 1; i <= n; ++i){
				scanf("%s",first);	
			for ( int j = 1; j <= m; ++j){
				s[i][j] = first[j-1];
				if(s[i][j] == 'B'){
					count++;
					}
				}
			
		}
		/* 				*/
		if(count > 0){
			column = 0;
			row = 0;
				int i = r;
				for (int j = 1; j <= m; ++j){
					if(s[i][j] == 'B'){
						column++;
						}
					}
				int j = c;
				for (int i = 1; i <= n; ++i){
					if(s[i][j] == 'B'){
						row++;
						}	
					}
				if(s[r][c] == 'B'){
					printf("0\n");
				}
				else if(column == 1 || row == 1){
					printf("1\n");	
				}
				else{
					printf("2\n");
				}
			}
		else{
			printf("-1\n");	
		}	
		}		
	return 0;
}
