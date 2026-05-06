#include <iostream>
using namespace std;

int main() {
    int a=0,b=0;


    try{
        if(b==0){
            throw"Division by xero error!";
            cout<<"result: "<<a/b<<endl;
        }
    }

        catch(const char* msg){
            cout<<"Exception caught: "<< msg <<endl;
        }



    







    return 0;
}
