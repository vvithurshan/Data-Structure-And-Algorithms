#include <iostream>
#include <string>
using namespace std;


class House{
private: // Access specifier, member variable cannot be accessed outside the class. 
    // member variable
    int length = 0;
    int width = 0;
public:
    // Access specifier, member function can be accessed outside the class.
    // member functions
    void set (int l, int w){
        length = l;
        width = w;
    }
    void area(){
        cout << "Area is "<<length * width<< endl;
    }
    
};

int main(){
    House h1;
    h1.set(10,5);
    h1.area();

    House h2;
    h2.set(20, 10);
    h2.area();

    int arr[] = {1, 2, 3, 4, 5};
}