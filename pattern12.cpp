#include <iostream>
using namespace std;

/*

1      1
12    21
123  321
12344321

*/

class solution
{
public:
    void pattern11(int n){

         for(int i = 1; i <= n; i++) {

        
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

           for(int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }


       

    }
    
};

int main()
{
    solution s1;
    s1.pattern11(4);
}

