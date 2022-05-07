#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t, n;
	char s[101];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%s",s);
		if(n <= 3 ){
			printf("YES\n");
		}	
		else{
			printf("NO\n");
		}
	}
		
	return 0;
}
