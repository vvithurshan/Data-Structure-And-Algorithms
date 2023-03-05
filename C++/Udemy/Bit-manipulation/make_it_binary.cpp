#include <iostream>
using namespace std;

void makeItBinary_m2(int n){
	int p = 1;
	int ans = 0;
	int a = 1;
	int i = 0;
	while(n){
		cout << n << endl;
		ans = ans + (a & n) * p;
		n >>= 1;
		p *= 10;
	}
	cout << ans << endl;

}


int main(){
	makeItBinary_m2(31);
}