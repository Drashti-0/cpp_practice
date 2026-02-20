#include<iostream>
using namespace std;


class A{

public:
int x;

void showA(){
    cout<<"A = "<<x<<endl;
}
};

class B : public A{
    public:
    void showB(){
        cout<<"CALLED B"<<endl;
    }

};

class C: public B{
    public:
    void showC(){
        cout<<"CALLED C"<<endl;
    }

};

int main(){
    C a1;
    a1.x=5;
    a1.showA();
    a1.showB();
    a1.showC();
}


/*
#include<iostream>
using namespace std;

class A{
public:
    void showA(){
        cout << "Function of Class A" << endl;
    }
};

class B : public A{
public:
    void showB(){
        cout << "Function of Class B" << endl;
    }
};

class C : public B{
public:
    void showC(){
        cout << "Function of Class C" << endl;
    }
};

int main(){
    C obj;     // Only one object of class C

    obj.showA();   // from class A
    obj.showB();   // from class B
    obj.showC();   // from class C

    return 0;
}
*/