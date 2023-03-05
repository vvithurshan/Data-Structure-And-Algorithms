#include <iostream>

using namespace std;

void clearLastIBits(int &n, int i){
	int a = ~0 << i;
	n &= a;
}

int main(){
	int n = 15;
	cout << n << endl;
	clearLastIBits(n, 3);
	cout << n <<endl;
}