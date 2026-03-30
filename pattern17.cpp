/*

    A
   ABA
  ABCBA
 ABCDCBA


*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 0; i < n; i++) {

        // 1. space
        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }

        // 2. A → i
        char ch = 'A';
        for(int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }

        // 3. reverse
        ch -= 2;
        for(int j = 0; j < i; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}