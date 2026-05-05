#include <iostream>
using namespace std;


void area1(int a){
    int x=a*a;
    cout<<"area 1 is: "<<x<<endl;
}

void area2(int b){
    int y=b*b;
    cout<<"Area 2 is: "<<y<<endl;
    area1(5);
}

int main() {

    area2(10);
    
    return 0;
}
