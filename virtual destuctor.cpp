#include <iostream>
using namespace std;

class base{
    public:
    virtual ~base(){
        cout<<"base destuctor"<<endl;
    }
};

class derived : public base{
public:
~derived(){
    cout<<"Derived Destuructor"<<endl;
}
};

int main() {
    base* b=new derived();
    delete b;
    
    return 0;
}
