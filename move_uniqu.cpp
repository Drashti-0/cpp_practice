#include <iostream>
#include<memory>
using namespace std;

int main() {

unique_ptr <int> p1=make_unique <int>(100);

unique_ptr <int> p2=make_unique <int>(200);

p2=move(p1);


cout<<*p2<<endl;

    

    return 0;
}
