#include <iostream>
using namespace std;


class test{
    public:
    int a=10;

    void show() const {
        cout<<a;
    }
};

int main() {
    test t1;
    t1.show();
    return 0;
}
