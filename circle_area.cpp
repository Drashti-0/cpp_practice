#include<iostream>
using namespace std;

class circle{

    private:
    int radius;

    public:

    circle(){
        radius=5;
    }
    int area(int radius){
        return radius*radius;

    }

    void display(){

        cout<<"Radius: "<<radius<<endl;
        cout<<"Area: "<<area(radius)<<endl;
    }

};
int main(){
    circle c1;

    c1.display();
}