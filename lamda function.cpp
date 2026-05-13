#include <iostream>
using namespace std;

int main() {
    
    auto add=[](int a, int b){
        return a+b;
};

cout<<"Sum: "<<add(3,4)<<endl;



int x=10;
auto printX=[x](){ cout<<"Captured valuel: "<<x<<endl;};
    printX();
        

    int x=10;
    auto modifyX =[&x](){x=20;};
    modifyX();
    cout<<"Modified x:"<<x<<endl;


auto multiply = [](int a, int b)->int {return a*b;};
cout<<"product: "<<multiply(3,4)<<endl;








    return 0;
}
