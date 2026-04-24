#include <iostream>
#include<memory>
using namespace std;

int main() {
    unique_ptr <int> p1=make_unique <int>(1);
    cout<<*p1<<endl;

    p1.reset(new int(100000));
    cout<<*p1<<endl;


    return 0;
}
