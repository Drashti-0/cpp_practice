#include <iostream>
using namespace std;

/*

ABCDE
ABCD
ABC
AB
A

*/

class solution
{
public:
    void pattern15(int n){

        for(int i=n;i>1;i--){
           char ch='A';
            for(int j=1;j<i;j++){
                cout<<ch;
                ch++;
             }
             cout<<endl;
        }
        
    }
    
};

int main()
{
    solution s1;
    s1.pattern15(6);
}