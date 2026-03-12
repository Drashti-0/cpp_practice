#include<iostream>
using namespace std;

class employee{
    
    private:
    int id;
    int salary;

public:

void setdata(int i,int s){
    id=i;
    salary=s;
}

void disdata(){
    cout<<"ID: "<<id<<endl;
    cout<<"Salary :"<<salary<<endl;
}


};

int main(){
    employee e1;

    e1.setdata(5,5000);
    e1.disdata();
}