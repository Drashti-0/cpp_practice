#include <iostream>
using namespace std;

class shape{

    public:
    virtual void draw()=0;
    //pure virtual
};

class circle : public shape{
    public:

    void draw(){
        cout<<"circle draw"<<endl;
    }
};

int main() {

    circle c1;
   c1.draw();
    
    return 0;
}
