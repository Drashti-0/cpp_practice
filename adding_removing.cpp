#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int>dq;

    dq.push_back(10);//add at the end
    dq.push_front(20);//add at the front
    dq.push_back(30);
    dq.push_front(40);

    dq.pop_back();//remove last element(30)
    dq.pop_front();//remove first element(40)
    
cout<<"deque element";

for(int num: dq){
    cout<<num<<" ";
}



    return 0;
}
