#include <iostream>
using namespace std;

/*
E
DE
CDE
BCDE
ABCDE
*/

class solution
{
public:
    void pattern18(int n){

        for(int i=0;i<n;i++){
            for(char ch='E'-i;ch<='E';ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
    
};

int main()
{
    solution s1;
    s1.pattern18(5);
}

