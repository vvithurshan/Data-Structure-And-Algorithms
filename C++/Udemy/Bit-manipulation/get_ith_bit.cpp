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


int main(){
	get_ith_bit(5, 4);
}