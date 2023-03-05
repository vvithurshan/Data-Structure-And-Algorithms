#include <iostream>
#include <vector>
using namespace std;

void unique(vector<int> arr, int n){
	int ans = 0;

	for (int i = 0; i < n ; i++){
		ans ^= arr[i];
	}

	cout << "Unique is " << ans << endl;
}
int main(){
	vector<int> arr = {2, 2, 1, 1, 4, 4, 5, 6, 5};
	int size = arr.size();
	unique(arr, size);
}