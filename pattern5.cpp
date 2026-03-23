#include <iostream>
using namespace std;

/*

*****
****
***
**
*

*/
class solution
{
public:
    void pattern5(int n){

        for(int i=n;i>0;i--){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
        }


    }
    
};

int main()
{
    solution s1;
    s1.pattern5(5);
}