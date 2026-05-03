#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int>lst;

    lst.push_back(10);
    lst.push_front(20);
    lst.push_back(30);
    lst.push_front(40);

    lst.pop_back();
    lst.pop_front();

    cout<<"List element: ";
    for(int num: lst){
        cout<<num<<" ";
    }





    
    return 0;
}
