#include <iostream>
using namespace std;

int main(){
	char str1[] = "789";
	char str2[] = "5678";

	int size_str1 = sizeof(str1)/sizeof(str1[0]) - 1;
	int size_str2 = sizeof(str2)/sizeof(str2[0]) - 1;
	int size_max = max(size_str1, size_str2) + 1;

	cout << size_str1 << size_str2 << size_max << endl;

	int A[size_max] = {0};

	string str1_rev = "";
	string str2_rev = "";
	

	int k = 0;
	for ( int i = size_str1 - 1 ; i >= 0; i--){
		str1_rev += (int (str1[i]) - 48);
	}
	k = 0;
	for ( int i = size_str2 - 1; i >= 0; i--){
		str2_rev += (int(str2[i]) - 48);
	}

	int carry = 0;
	int a, b, total;

	for ( int i = 0; i < size_max ; i++){

		if ( i == size_max - 1){
			if (carry == 0){
				size_max -= 1;
				break;
			}
			else{
				A[i] = carry;
				break;
			}
		}

		a = 0;
		b = 0;

		if ( i < size_str1)
			a = str1_rev[i];

		if ( i < size_str2)
			b = str2_rev[i];

		total = a + b + carry;

		carry = total / 10;
		cout << a << b << carry << endl;
		A[i] = total % 10;
	}

	cout << endl;

	for (int i = size_max - 1; i >= 0; i--){
		cout << A[i];
	}

	cout << endl;

}