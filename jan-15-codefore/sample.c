#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){	
	int t, n, m,r, c, count,store,column,row;
	char first[100];
	char s[50][50];
	scanf("%d\n",&t);
	while(t--){
		count = 0;
		scanf("%d %d %d %d",&n,&m,&r,&c);
		for ( int i = 1; i <= n; ++i){
				scanf("%s",first);	
			for ( int j = 1; j <= m; ++j){
				s[i][j] = first[j-1];
				}
			}
		}
		
}
