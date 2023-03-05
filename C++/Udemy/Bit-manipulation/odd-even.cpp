#include <vector>
#include <iostream>
#include "welcome.cpp"
using namespace std;

void odd_even(int n){
	int a = 1;
	int b = a & n;

	if (b)
		cout << n << " is an odd number" << endl;
	else
		cout << n << " is an even number" << endl;
}

int main(){
	welcome();
	int in;
	cout << "Enter your number: ";
	cin >> in;
	odd_even(in);
}