#include <iostream>
using namespace std;

int main() {
    string str1=("Helloww");
    string str2=("DRASHTI");

    string temp=std::move(str1);
    str1=std::move(str2);
    str2=std::move(temp);

    cout<<str1<<endl;
    cout<<str2;

    return 0;
}
