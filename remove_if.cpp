#include <iostream>
#include<forward_list>
#include<set>
using namespace std;

int main() {
    forward_list<int> fl={10,15,20,25,30};

    fl.remove_if([](int n) {return n>20; });

    cout<<"After remove_if: ";
    for(int x: fl) cout<<x<<" ";





forward_list<int> oll={20,30};
auto it= oll.before_begin();

oll.insert_after(it,10);
 for(int x: oll) cout<<x<<" ";




 //splice_after

 forward_list<int> fl1={1,2,3};
 forward_list<int> fl2 = {10,22};

 fl2.splice_after(fl2.begin(),fl);
 cout<<endl;
 for(int x: fl2) cout<<x<<" ";




 //lower and uperbound

 set<int> s={10,20,30,40,50};

 auto lb=s.lower_bound(30);
 cout<<"Lower Bound of 30: "<<*lb<<endl;

 auto ub=s.upper_bound(30);
 cout<<"Upper bound of 30: "<<*ub<<endl;





    return 0;
}
