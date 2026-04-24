#include <iostream>
using namespace std;

int main() {
    string str1,str2;

   str1="Hello,name is drashti";
   str2=std::move(str1);

   cout<<str2<<endl;
   cout<<str1<<endl;


    return 0;
}
