#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned long n1, n2;
	unsigned long a, n, m;
	scanf("%lu %lu %lu",&n, &m, &a);
/*
	n1 = 0;
	n2 = 0;
	while(n > 0){
		n1 = n1 + 1;
		n = n - a;
	}
	
	while(m > 0){
		n2 = n2 + 1;
		m = m - a;
	}
	printf("%lu\n",n1*n2);
}
*/
n1 = n/a;
if(n%a != 0){
	n1 = n1 + 1;
	}
	
n2 = m/a;
if(m%a != 0){
	n2 = n2 + 1;
	}
		
printf("%lu\n",n1*n2);

}
