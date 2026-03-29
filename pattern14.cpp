#include<iostream>
using namespace std;

/*
A
AB
ABC
ABCD
ABCDE
*/

class solution{
    public:
    void pattern14(int n){

        for(int i=0;i<n;i++){
            char num='A';
            for(int j=0;j<i;j++){
            cout<<num<<" ";
            num++;
            }
            cout<<endl;
            
        }
          

       
    }
};

int main(){
     solution s1;
     s1.pattern14(6);

}