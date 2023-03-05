#include <iostream>
#include <vector>
using namespace std;

void findTwoUniqueNumbers(vector <int> arr, int &num1, int &num2){
    int result = 0;

    for (int x : arr){
        result ^= x;
    }

    int RightmostSetBit = result & -result;

    int grp1 = 0;
    int grp2 = 0;

    for (int x : arr){
        if ( x & RightmostSetBit)
            grp1 ^= x;
        else
            grp2 ^= x;
    }
    num1 = grp1;
    num2 = grp2;
}

int main(){
    vector <int> arr = { 1, 2, 3, 4, 4, 5, 3, 2 };
    int num1, num2;
    findTwoUniqueNumbers(arr, num1, num2);
    cout  << "Unique numbers are " << num1 << " and " << num2 << endl;
}