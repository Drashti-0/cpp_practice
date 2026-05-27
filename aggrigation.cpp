#include <iostream>
using namespace std;

class add{
    public:
    string city;

};

class student{
public:

add *addrr;//first class notation

void show(){
    cout<<addrr->city;
}

};



int main() {

    add a;
    student s;

    s.addrr=&a;
    s.show();



    
    return 0;
}

