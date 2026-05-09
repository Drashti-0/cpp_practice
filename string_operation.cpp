#include <iostream>
#include<string>
using namespace std;

int main() {
    string s1="Hello";
    string s2="world";

    //assignment
    string s3=s1;

    //concatenation
    string s4=s1+ " "+s2;

    //compare
    if(s1==s2){
        cout<<"Equal\n";
    }

    else{
        cout<<"Not Equal\n";
    }

    //swap
    swap(s1,s2);
    cout<<"After Swap: "<<s1<<" "<<s2<<endl;

    //substring
    string sub=s4.substr(0,5);

    cout<<"Substring: "<<sub<<endl;
    
    return 0;
}
