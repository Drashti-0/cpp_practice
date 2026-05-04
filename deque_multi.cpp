#include <iostream>
#include<deque>
#include<algorithm>//for sorting use
using namespace std;

int main() {
   deque <int> dq;

   dq.push_back(10);
   dq.push_back(20);
   dq.push_front(5);
   dq.push_front(1);

   //emplace_back && emplace_front
   dq.emplace_back(25);
   dq.emplace_front(0);

   //at front and back
   cout<<"Element at index 2: "<<dq.at(2)<<endl;
   cout<<"Front "<<dq.front()<<"Back"<<dq.back()<<endl;

   //pop back and pop front
   dq.pop_back();
   dq.pop_front();

   //insert: insert 99 at position 2
   dq.insert(dq.begin()+2,99);

   //erase remove element at position 3
   dq.erase(dq.begin()+3);

   //size and empty
   cout<<"Size: "<<dq.size()<<endl;
   cout<<"IS deque empty? "<<(dq.empty()? "Yes":"No")<<endl;

   //sort
   sort(dq.begin(),dq.end());

   //find 
   auto it=find(dq.begin(),dq.end(),99);
   if(it!=dq.end()){
    cout<<"found 99 at index: "<<distance(dq.begin(),it)<<endl;

   }

   //display dque
   cout<<"Deque elements: ";
   for(int x: dq){
    cout<<x<<" ";
   }

   cout<<endl;





   return 0;
}
