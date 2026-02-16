#include<iostream>
using namespace std;

class test{
    public:
    test(){
        cout<<"HELLO WORLD !!!"<<endl;
        cout<<"Counstructor called!!"<<endl;
        cout<<endl;
    }
    ~test(){
        cout<<"Destructor called!!!"<<endl;
        cout<<endl;

    }
};
int main(){
    test t1;
}