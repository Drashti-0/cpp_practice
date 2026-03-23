#include <iostream>
using namespace std;

/*
*********
 *******
  *****
   ***
    *
*/

class solution
{
public:
    void pattern8(int n){

        for(int i=0;i<5;i++){
           
             for(int j=0;j<i;j++){
                cout<<" ";
            }

            for(int k=2*n-2*i-1;k>0;k--){
           cout<<"*";
            }

           
            cout<<endl;
        }
    }
    
};

int main()
{
    solution s1;
    s1.pattern8(5);
}

