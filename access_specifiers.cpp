#include <iostream>
using namespace std;

class demo{
    
    private:
    int a=10;

    public:
    int b=20;

    void show(){
        cout<<a;
    }
};

int main() {

    demo d1;
    d1.show();  
    return 0;
}
