#include<iostream>
using namespace std;

class vehical{

public:

string no;
string name;
char ch;

vehical(){

cout<<"Enter your vehicle number: "<<endl;
cin>>no;

 cin.ignore();
cout<<"Enter your vehicle boss name: "<<endl;
cin>>name;

}

void charge(){

cout<<"Enter your vehicle (car=c / bike=b): "<<endl;
cin>>ch;

if(ch=='b'){

int t;
cout<<"Enter your bike park timing: "<<endl;
cin>>t;

int bcharge = t*300;

cout<<"Your bike charge per hour: "<<bcharge<<endl;

}

else{

int time;
cout<<"Enter your car park timing: "<<endl;
cin>>time;

int ccharge = time*500;

cout<<"Your car charge per hour: "<<ccharge<<endl;

}

}

void display(){

cout<<"Vehicle number: "<<no<<endl;
cout<<"Owner name: "<<name<<endl;

}

};

int main(){

vehical v1;

v1.charge();
v1.display();

}
