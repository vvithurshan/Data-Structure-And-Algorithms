#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(char i[100000], char p[100000]){

	int len_i, len_p, count = 0;
	len_i = strlen(i);
	len_p = strlen(p);
	int k = 0, l = 0;
	if ( len_i > len_p)
		printf("IMPOSSIBLE");
	else{
	    while((k < len_i) && (l < len_p)){
	    	if ( i[k] == p[l]){
	    		//printf("%c %c\n", i[k], p[l]);
	    		count++;
	    		k++;
	    		l++;
	    	}
	    	else
	    		l++;
	    }
	   		 if ( len_i == count)
	    		printf("%d",abs(len_i - len_p))	;
	   		 else
	    		printf("IMPOSSIBLE");    
	}
}
int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		char i[100000];
		char p[100000];
		scanf("%s",i);
		scanf("%s",p);
		printf("Case #%d: ",tc);
		solve(i, p);
		printf("\n");
	}
	return 0;
}