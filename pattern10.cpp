#include<iostream>
using namespace std;

/*
*
**
***
****
*****
*****
****
***
**
*

*/

class solution{
    public:
    void pattern10(int n){
          for(int i = 0; i <n; i++) {          
            for(int j = 0; j <i; j++) {      
                cout <<"*";
            }
            cout << endl;
        }
         for(int i=n;i>0;i--){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;

        }

       
    }
};

int main(){
     solution s1;
     s1.pattern10(5);

}