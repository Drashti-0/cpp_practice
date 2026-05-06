#include <iostream>
#include<string>
#include<stdexcept>
using namespace std;

void lowlevelfunction(){
    try{
        throw runtime_error("An error occurred in low levelfunction");
    }
//runtime_error is error throw inbuild type
    catch(const runtime_error& e){
        cout<<"Low-level function caught exception: "<<e.what()<<endl;
        cout<<"Logging the error...."<<endl;
        throw;  //rethrow the exception
    }
}


void highlevelfunction(){
    try{
        lowlevelfunction();
    }

    catch(const runtime_error& e){
        cout<<"high-level function caught exception: "<<e.what()<<endl;
        cout<<"Taking corrective action..."<<endl;
        throw;
    }
}



int main() {

     try{
        highlevelfunction();
     }

     catch(const std::exception &e){
    cout<<"Main caught exception: "<<e.what()<<endl;
     }

     catch(...)
     {
        cout<<"main function caught an unknown exception. "<<endl;

     }
    
    return 0;
}
