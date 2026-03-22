#include<iostream>
using namespace std;

/*

1
12
123
1234
12345

*/

class solution{
public:
    void pattern3(int n){

        for(int i=1;i<=n;i++){  
             int num = 1;          
            for(int j=1;j<=i;j++){     
               cout<<num;
                num++;               
            }
            cout<<endl;
        }
         
    }
};

int main(){
    solution s1;
    s1.pattern3(5);
}