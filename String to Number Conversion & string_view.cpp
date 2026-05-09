#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main() {
    string s = "123";

    // string to int
    int num = stoi(s);
    cout << num + 10 << endl;

    // string_view
    string str = "Hello world";
    string_view sv(str);

    cout << sv.substr(0,5);

    return 0;
}