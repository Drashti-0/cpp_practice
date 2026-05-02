#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int>lst={1,2,3,4,5};

    cout<<"first_name: "<<lst.front()<<endl;
    cout<<"last_name: "<<lst.back()<<endl;

    return 0;
}
