#include<iostream>
using namespace std;

class online{

private:
int id;
string name;
string coursename;

public:

online(){

cout<<"Enter your name: ";
cin>>name;

cout<<"Enter your id : ";
cin>>id;

cout<<"Enter your current course name : ";
cin>>coursename;

}

};

int main(){

int n;

cout<<"How many students: "<<endl;
cin>>n;

// dynamic object array
online *s = new online[n];

delete[] s;

}