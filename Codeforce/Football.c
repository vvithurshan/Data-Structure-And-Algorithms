#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	a = b = 0;
	char team[101];
	scanf("%s",team);
	int n;
	for ( n = 0; team[n] != '\0';++n);
	for ( int i = 0; team[i] != '\0'; ++i){
		if(team[i] == '1'){
			a++;
			b = 0;
			if(a == 7){
				printf("YES");
				break;
			}
		}
		else if (team[i] == '0'){
			b++;
			a = 0;
			if(b == 7){
				printf("YES");
				break;
			}
		}
		if(i == n-1)
			printf("NO");
	}
}
