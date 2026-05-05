#include <iostream>
using namespace std;

class number{
    public:
    int x;
    number(int a){
        x=a;
    }

number add(number n){
    return(x + n.x);
}
};


int main() {

    number n1(5),n2(10);
    number result = n1.add(n2);

    cout<<result.x;
    return 0;
}
