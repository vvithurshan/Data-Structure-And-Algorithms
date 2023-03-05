#include <iostream>
using namespace std;

void setCount_m2(int n){

	int count = 0;
	int n_initial = n + 0;
	while(n_initial){
		n_initial &= n_initial-1;
		count++;
	}
	cout << n << " has " << count << " number of set bits" << endl;
}

void setCount_m1(int n){
	int n_initial = n + 0;
	int count = 0;
	int i = 0;
	while (n){
		int a = 1;
		a <<= i;
		cout << n << endl;
		if (n & a){
			count++;
			n = n & ~a;
		}
		i++;
	}
	cout << n_initial << " has " << count << " number of set bits" << endl;
}

int main(){
	setCount_m1(31);
	setCount_m2(31);
}