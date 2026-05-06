#include <iostream>
using namespace std;
class demo{
    string name;

    public:
    demo(string n): name(n){
        cout<<"Constructor: "<<name<<endl;
    }
    ~demo(){
        cout<<"Destructor: "<<name<<endl;
    }
};

void test(){
    demo d1("local object in test()");
    throw runtime_error("Exception in test()");
}



int main() {
    try{
        demo d2("local object in main()");

           test();
    }
    
    catch(exception &e){
        cout<<"caught exception: "<<e.what()<<endl;
    }
 


    return 0;
}
