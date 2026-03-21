#include<iostream>
using namespace std;

// Create a class *Demo* and define function *outside the class* using *scope resolution operator*.


class demo{

    
     public:
        void area();
};

void demo::area(){
    cout<<"Funtion declared in outside of this class  !!!"<<endl;
}

int main(){
    demo d1;

    d1.area();
}