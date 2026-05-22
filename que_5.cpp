#include <iostream>
//#include <compare>

using namespace std;

int main() { 

    int a = 5, b = 10;

    // Three-Way Comparison Operator
    auto result = a <=> b;

    if (result < 0)
        cout << "a is less than b";

    else if (result > 0)
        cout << "a is greater than b";

    else
        cout << "a is equal to b";

    return 0;
}