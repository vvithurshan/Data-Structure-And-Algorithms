#include <iostream>
#include <algorithm>
using namespace std;

int charToDigit(char c){
	return c - '0';
}

char digitToChar(int i){
	return i + '0';
}

string addNumbers(string n1, string n2){
	if( n1.length() > n2.length()){
		swap(n1, n2);
	}
	string result;
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());

	int carry = 0;

	for ( int i = 0; i < n1.length(); ++i){
		int d1 = charToDigit(n1[i]);
		int d2 = charToDigit(n2[i]);

		int sum = d1 + d2 + carry;
		carry = sum/10;
		result.push_back(digitToChar(sum%10));

	}

	for ( int i = n1.length(); i < n2.length(); ++i){
		int d2 = charToDigit(n2[i]);
		int sum = carry + d2;
		carry = sum / 10;
		result.push_back(digitToChar(sum%10));
	}

	if (carry){
		result.push_back('1');
	}

	reverse(result.begin(),result.end());
	return result;
}

int main(){

	string str1 = "999999999999999999";
	string str2 = "999999999999999999";
	string res = addNumbers(str1, str2);
	cout << res << endl;
	cout << charToDigit('5') << endl ;
	cout << digitToChar(5) << endl;
	return 0;
}