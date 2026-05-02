#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec={1,2,3,4,5};

    cout<<"First element: "<<vec.front()<<endl;
    cout<<"Secound element: "<<vec.back()<<endl;
    cout<<"Element  index is 2" <<vec[2]<<endl;
    return 0;
}
