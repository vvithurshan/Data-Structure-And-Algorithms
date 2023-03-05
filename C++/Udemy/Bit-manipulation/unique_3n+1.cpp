#include <iostream>
#include <vector>
using namespace std;


void update(vector <int> &hash, int x){
	for (int i = 0; i < 32; i++){
		if ((1 << i) & x)
			hash[i]++;
	}
}
void FindNumber(vector <int> hash){
	int ans = 0;
	for (int i = 0; i < 32; i++){
		if (hash[i])
			ans += (1 << i);
	}

	cout << ans << endl;
}


void uniqueNumber(vector <int> arr){
	vector <int> hash(32, 0);

	for (int i : arr){
		update(hash, i);
	}

	for ( int i = 0; i < 32; i++){
		hash[i] = hash[i] % 3;
	}
	FindNumber(hash);
}


int main(){
	vector <int> arr = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4, 4, 9};
	uniqueNumber(arr);
}