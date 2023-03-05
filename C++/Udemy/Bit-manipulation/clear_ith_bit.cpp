#include <iostream>

using namespace std;

void get_ith_bit(int n, int postion){
	int a = 1;
	a = a << postion - 1;
	int ans = a & n;
	if (ans)
		cout << n << " has " << postion << " th position on" << endl;
	else
		cout << n << " has " << postion << " th position off" << endl;
}

void set_ith_bit(int &n, int position){
	int a = 1;
	a <<= position - 1;
	n |= a;
}

void clear_ith_bit(int &n, int position){

	get_ith_bit(n, position);
	int a = 1;
	a = ~(a << position - 1);

	n = a & n;

	get_ith_bit(n, position);

}

void update_ith_bit(int &n, int position, int b){
	clear_ith_bit(n, position);
	b <<= position - 1;
	n |= b;
}

int main(){
	int a = 5;
	// clear_ith_bit(a,3);
	// set_ith_bit(a,3);
	// get_ith_bit(a, 3);
	update_ith_bit(a, 3, 1);
	get_ith_bit(a, 3);

}