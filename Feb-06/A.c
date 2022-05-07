#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revstr(char *str1)  
{  
    // declare variable  
    int i, len, temp;  
    len = strlen(str1); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  

int main(){
	int tt, n, k;
	char s[1000000000];
	scanf("%d",&tt);
	while(tt--){
		scanf("%d %d",&n,&k);
		scanf("%s",s);
		if(k == 0){
			printf("1");
			continue;
		}
		char sr[1000000000];
		// revstr(sr);

		char s1[1000000000];
		char s2[1000000000];
		strcpy(sr, s);
		
		while(k--){
			strcpy(sr, s);
			revstr(sr);
			strcpy(s1,strcat(s,sr));
			strcpy(s2,strcat(sr,s));
		}


	}
	return 0;
}
