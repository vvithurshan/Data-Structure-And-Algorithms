#include <iostream>
#include <cmath>
using namespace std;

bool IsPowerOfN(int n, int base) {
    if (n < 1) {
        return false; // Ensure input is valid
    }
    int maxPower = log(n) / log(base); // Calculate the largest power of the base that is less than or equal to the input
    return (pow(base, maxPower) == n);
}


void IsPowerOfTwo(int n ){
	if  ((n & (n - 1)) == 0)
		cout << n <<" is a power of two" << endl;
	else
		cout << n << " is not a power of two" << endl;
}


void IsPowerOfFour(int n){

	if (((n & (n - 1)) == 0) && (n & 2) == 0)
		cout << n <<" is a power of four" << endl;
	else
		cout << n <<" is not a power of four" << endl;

}
int main(){
	IsPowerOfTwo(5);
	cout<< IsPowerOfN(4,2) << endl;
	IsPowerOfTwo(2);
	IsPowerOfTwo(9);
	IsPowerOfTwo(8);
	IsPowerOfFour(8);
	IsPowerOfFour(2);
	IsPowerOfFour(16);


}