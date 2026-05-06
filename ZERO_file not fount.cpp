#include <iostream>
#include<fstream>
using namespace std;

int main() {
    try{
        //divide by zero
        int a=0,b=0;

        if(b==0){
            throw"Division by ZERO error!";
            cout<<"Result "<<(a/b)<<endl;
        }

        //file not found
        ifstream file("data.txt");
        if(!file){
            throw 404;
        }

        cout<<"File opened Successfully! "<<endl;

    }

    catch(const char* msg){
       cout<<"Exception: "<<msg<<endl;
    }

    catch(int errorcode){
        cout<<"Exception: file not found ! Error code= "<<errorcode<<endl;
    }
    
    return 0;
}
