#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int N, A[N];
printf("Input no of element in array A: ");
scanf("%d", &N);
printf( "You entered: %d\n", N);
printf("Input array A elements in one line: ");
for(int i=0; i<N; i++){
   fscanf(stdin, "%d", &A[i]);
   printf( "A[%d] is: %d\n", i, A[i]);
}
}
