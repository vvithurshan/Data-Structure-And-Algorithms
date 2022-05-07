#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(long long int  A){
	long long int count = 0;

	for ( int i = A ; i > 0; --i){
		if ( A % i == 0){
			long long int arr[A];
			long int a = 0;
			// printf("%d ",i);
			if ( A - 10 < 0)
				count++;
			else{
			    long long int temp = i;
			    while ( temp > 0 ){
			    	arr[a++] = temp % 10;
			    	temp = temp / 10;
			    	//printf("%d\n",i);
			    }
			    // for ( int i = 0 ; i < a; ++i)
			    	//printf("%d ", arr[i]);
	    
	    		    if ( a == 1 )
	    		    	count++;
	    		    else {
	    		    long int i = 0, j = a - 1, pali = 1;
	    		    while ( i < j ){
	    		    	if ( arr[i++] != arr[j--]){
	    		    		pali = 0;
	    		    		break;
	    		    	}
	    		    }
	    		    if ( pali )
	    		    	count++;
			    }
			}
		}
	}	

	printf("%lld",count);
}
int main(){
	int tt;
	scanf("%d",&tt);
	for ( int tc = 1; tc <= tt; ++tc){
		long long int  A;
		scanf("%lld", &A);
		printf("Case #%d: ",tc);
		solve(A);
		printf("\n");
	}
	return 0;
}
