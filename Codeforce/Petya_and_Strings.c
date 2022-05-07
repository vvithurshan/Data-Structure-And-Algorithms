#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char s[100];
	char s2[100];
	
	scanf("%s\n",s);
	scanf("%s",s2);
	for(i = 0; s[i] != '\0'; ++i){
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
	}
	
	for(i = 0; s2[i] != '\0'; ++i){
		if(s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] = s2[i] + 32;
	}
	/*This also works*/
	if(s[0] > s2[0])
		printf("First is greater\n");
	
	if(s[0] < s2[0])
		printf("Second is greater\n");	

	if(s[0] == s2[0])
		printf("Equal\n");
		
	/*###########################*/
		int count = 0;
	for(i = 0; s[i] != '\0'; ++i){
		int a = s[i];
		int b = s2[i];
		if(a > b){
			count++;
			break;
			}
		else if(a == b)	
			count = count;
		else{
			count--;
			break;}
	}
	if(count > 0)
		count = 1;
	else if(count == 0)
		count = 0;
	else
		count = -1;
	printf("%d\n",count);
	return 0;
}
