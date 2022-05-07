#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){	
	int t, n, m,r, c, count,store,column,row;
	char s[50][50];
	scanf("%d\n",&t);
	while(t--){
		count = 0;
		scanf("%d %d %d %d",&n,&m,&r,&c);
		for ( int i = 1; i <= n; ++i){
			for( int j = 1; j <= m; ++j){
				scanf("%c",&s[i][j]);
				if(s[i][j] == 'B'){
					count++;
					}
				}
				printf("\n");
			}
		}
		
}
