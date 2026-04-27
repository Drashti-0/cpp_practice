#include<iostream>
#include<sstream>

using namespace std;

int countword(string s){
    int count=0;
    stringstream ss(s);
    string world;

    while(ss>>world){
        count++;

    }
        return count;
}

int main(){

   
    cout<<countword("I am girl");

   





}