#include <iostream>
using namespace std;


/*

4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

int main() {
    int n = 4;
    int size = 2*n - 1;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){

            int value = n;

            
            if(i < value) value = i;

            
            if(j < value) value = j;

            
            if(size-1-i < value) value = size-1-i;

            
            if(size-1-j < value) value = size-1-j;

            cout << (n - value) << " ";
        }
        cout << endl;
    }

    return 0;
}