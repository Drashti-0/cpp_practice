#include <iostream>
using namespace std;

class a {
private:
    int pin = 1111;

public:
    friend void show(a);
};

void show(a obj) {
    int a;
    cout<<"Enter your pin: ";
    cin>>a;
    if(a == 1111) {
        cout << "Successful" << endl;
    }
    else {
        cout << "Not successful" << endl;
    }

  
}

int main() {

    a obj;
    show(obj);

    return 0;
}