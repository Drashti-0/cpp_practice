#include <iostream>
using namespace std;

class shape{
     public:
     virtual void area()=0;
};

class circle: public shape{
    int r;

    public:
    circle (int radius){
        r=radius;
    }

    void area(){
        float a=3.14*r*r;
        cout<<"Circle Area: "<<a<<endl;
    }
};

class rectangle: public shape{
    int l,b;

    public:
    rectangle(int length, int breadth){
        l=length;
        b=breadth;
    }

    void area(){
        float a=l*b;
        cout<<"Rectangle Area: "<<a<<endl;
    }
};

class triangle: public shape{

    int b,h;
    public:
    triangle(int base, int height){
        b=base;
        h=height;
    }

    void area(){
        float a= 0.5*(b*h);
        cout<<"Triangule Area: "<<a<<endl;
    }
};

int main() {

    shape* s[3];

    s[0]=new circle(5);
    s[1]=new rectangle(10,5);
    s[2]=new triangle(4,6);

    for(int i=0;i<3;i++){
        s[i]->area();
    }
    
    return 0;
}
