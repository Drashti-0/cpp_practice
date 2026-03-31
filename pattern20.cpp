#include <iostream>
using namespace std;


/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

class p {
public:
    void patteren3(int n) {

        // Upper part
        for (int i = 1; i <= n; i++) {

            // Left stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            // Spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }

            // Right stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            cout << endl;
        }

        // Lower part
        for (int i = n - 1; i >= 1; i--) {

            // Left stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            // Spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }

            // Right stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};

int main() {
    p p3;
    p3.patteren3(5);
    return 0;
}