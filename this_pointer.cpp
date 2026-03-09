#include<iostream>
using namespace std;

class student{
    protected:
    string name;
    int id;

    public:
    student(string name,int id){
        this->id=id;
        this->name=name;
    }
  void dis(){
    cout<<"Student id is: "<<id<<endl;
    cout<<"Student name is : "<<name<<endl;
  }

};

int main(){
      student s1("Drashti",5);

      s1.dis();



}