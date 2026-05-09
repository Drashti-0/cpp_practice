#include <iostream>
using namespace std;

class test{
    public:

    int x;

    void set(int x){
        this->x =x;
    }
    void show() {
        cout << x;
    }
};

int main() {
    test obj;
    test * ptr =&obj;
    //pointer to object

    ptr->set(10);
    ptr->show();
    
    return 0;
}
