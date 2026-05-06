#include <iostream>
using namespace std;

class dividebyzero{
    public:
    void showmessage(){
        cout<<"Error: Divison by zero!"<<endl;
    }
};


int main() {
    int a=10,b=0;

    try{
        if(b==0){
            throw dividebyzero();
            cout<<"Result = "<<a/b<<endl;
        }
    }

    catch(dividebyzero &e){
        e.showmessage();
    }
    
    return 0;
}
