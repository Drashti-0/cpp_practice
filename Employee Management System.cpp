#include<iostream>
using namespace std;

class employe{

public:
int id;
string name;
int salary;
char ch;

employe(){
    cout<<"Enter id: ";
    cin>>id;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter salary: ";
    cin>>salary;

    cout<<"Enter status (m/d): ";
    cin>>ch;
}

void display(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Status: "<<ch<<endl;
}

};

class manager : public employe{

public:
void bonus(){
    salary = salary + 3000;
    cout<<"Salary with bonus: "<<salary<<endl;
}

};

class developer : public employe{

public:
void payment(){

    int time;
    cout<<"Enter extra work time: ";
    cin>>time;

    if(time>0 && time<2){
        salary = salary + 2000;
    }

    else if(time>=2 && time<5){
        salary = salary + 5000;}

    else{
        salary = salary + 10000;}

    cout<<"Salary is "<<salary<<endl;
}

};

int main(){

manager m;
m.bonus();

developer d;
d.payment();

}