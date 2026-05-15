#include <iostream>
using namespace std;

class engine{


    private:
    int c;

    public:
    engine(){
        c = 120;
        cout << "constructor" << endl;
    }

    void show(){
        cout << "Horsepower: " << c << endl;
    }

    ~engine(){
        cout << "Destructor" << endl;
    }
}; 



class car{

    engine e;   // Composition

    public:

    car(){
        cout << "Car created" << endl;
    }

    void display(){
        e.show();
    }

    ~car(){
        cout << "Car destroyed" << endl;
    }
};



int main() {
    car c1;

    c1.display();

    
    return 0;
}
