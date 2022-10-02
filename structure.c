#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strcpy

/* used to store many data
in array we can store only one type of data type
but here we can stores multiple types data types.
*/

struct Batsmen { // starting point of object oriented programming
	char name[20];
	int score;
	double strike_rate;
	int total_run;
};
int main(){
	struct Batsmen Vithurshan;
	//Vithurshan.name = "Vithurshan"; // it doesn't work
	strcpy(Vithurshan.name, "Vithurshan");
	Vithurshan.score = 98;
	Vithurshan.strike_rate = 150.0;
	Vithurshan.total_run = 5000;
	
	printf("Total run of %s : %d\n",Vithurshan.name, Vithurshan.total_run);

return 0;
}
