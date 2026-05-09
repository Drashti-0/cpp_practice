#include <iostream>
using namespace std;

class a{

    public:
    void show(){
        cout<<"base class\n";
    }
};

class b: public a{
};

int main() {
    b obj;
    obj.show();
    return 0;
}
//output:::base class