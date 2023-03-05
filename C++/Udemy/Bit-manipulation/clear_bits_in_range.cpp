#include <iostream>

using namespace std;

void clearBitsInRange(int &n, int i, int j){
	int a = ~0 << j+1;
	int b = (1 << i) - 1;
	int ans = a | b;
	n &= ans;
}

int main(){
	int n = 31;
	clearBitsInRange(n, 1, 3);
	cout << n << endl;
}