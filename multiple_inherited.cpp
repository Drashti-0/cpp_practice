#include<iostream>
using namespace std;

class printer{
    public:
    void showA(){

        cout<<"class A :::::class printer called"<<endl;
    }

};

class scanner{
   public:
   void showB(){
    cout<<"class B ::::L:class scanner called "<<endl;
   }

};

class C :public printer,public scanner{
    public:
    void showC(){
         cout<<"MAIN FUNCTION CALLED CCCC"<<endl;
    }

};
int main(){
    C c1;
    c1.showA();
    c1.showB();
    c1.showC();
}