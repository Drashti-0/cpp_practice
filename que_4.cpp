#include <iostream>
#include <memory>
using namespace std;

int main() {

    // Smart Pointer
    unique_ptr<int> ptr(new int(50));

    cout << "Value = " << *ptr << endl;

    return 0;
}