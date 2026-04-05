#include<iostream>
using namespace std;

class employee{

private:
int id;
string name;
string dep;

public:
static int count;

employee(){

count++;

cout<<"Count is "<<count<<endl;

cout<<"Enter your id : "<<endl;
cin>>id;

cout<<"Enter your name: "<<endl;
cin>>name;

cout<<"Enter your department: "<<endl;
cin>>dep;

}

};

int employee::count = 0;

int main(){

employee e1,e2;

}