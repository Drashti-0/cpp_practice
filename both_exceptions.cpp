#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int a=0,b=0;
    //first exception
 
    try{
        if(b==0){
            throw"Division by zero error!";
        }
    }

    catch(const char* msg){
        cout<<"Exception: "<<msg<<endl;
    }

    //second exception handling

    try{
        ifstream file("data.txt");

        if(!file)
        throw 404;
    }

    catch(int errorcode){
        cout<<"exception: File not found! Error Code= "<<errorcode<<endl;
    }
    
    return 0;
}
