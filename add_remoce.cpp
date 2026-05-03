#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector<int>vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    vec.pop_back();

    cout<<"Vector elements";
    for(int num: vec){
        cout<<num<<"  ";
    }
    
    return 0;
}
