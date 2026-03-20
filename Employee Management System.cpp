#include<iostream>
using namespace std;

class employee{

private:
int id;
string name;
double salary;

public:

employee(){

cout<<"Enter your id: "<<endl;
cin>>id;

cout<<"Enter your name: "<<endl;
cin>>name;

cout<<"Enter your salary: "<<endl;
cin>>salary;

}

double updatesalary(double s){

return salary + s;

}

void display(){

cout<<"ID : "<<id<<endl;
cout<<"NAME : "<<name<<endl;
cout<<"SALARY : "<<salary<<endl;

double inc;

cout<<"Enter increment amount: "<<endl;
cin>>inc;

cout<<"Updated salary: "<<updatesalary(inc)<<endl;

}

};

int main(){

int n;

cout<<"Enter the number of employee: ";
cin>>n;

employee e[n];

for(int i=0;i<n;i++){

e[i].display();

}

}