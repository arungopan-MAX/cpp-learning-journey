#include <iostream>
using namespace std;

int main(){

    int n = 20;
    int* ptr = &n;

    cout << "Address stored in ptr: " << ptr << endl;
    ptr = ptr + 1;
    cout << "Adding 1 to ptr: " << ptr << endl;

    ptr = ptr + 2;
    cout << "Adding 2 to ptr: " << ptr;
    return 0;
}
