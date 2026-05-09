#include <iostream>
using namespace std;

class base{

    public:
    void show(){
        cout<<"base class\n";
    }


};

class derived :public base{
    public:
    void show(){
        cout<<"Derived class\n";
    }

};

int main() {

    base* b;
    derived d;

    b=&d;

    b->show();
    
    return 0;
}

//output:::base