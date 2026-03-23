#include <iostream>
using namespace std;

/*

12345
1234
123
12
1

*/

class solution
{
public:
    void pattern6(int n){

        for(int i=n;i>1;i--){
           
            for(int j=1;j<i;j++){
                cout<<j;
                
             }
             cout<<endl;
        }
        
    }
    
};

int main()
{
    solution s1;
    s1.pattern6(6);
}