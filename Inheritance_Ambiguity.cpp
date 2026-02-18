#include<iostream>
using namespace std;

//in multiple inheritance two class name in functions same name so object are confused is called..

class A{
    public:
    void show(){
        cout<<"Function A is called: "<<endl;

    }

};
class B{
    public:
    void show(){
        cout<<"Function B is called: "<<endl;
    }

};
class C:public A,public B{
    

};

/*      ERROR therw
int main(){
    C c1;
    c1.show();
     c1.show();
}
     */


     //ERROR SOLUTION

     int main(){
        C c1;
        c1.A::show();
        c1.B::show();
     }