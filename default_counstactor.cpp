#include<iostream>
#include<string>
using namespace std;

class student{
    private: 
    int id;
    string name;

    public:
    //defulat means no argument
    student(){

        id=003;
        name="drashti";
    }

    void display(){
        cout<<"ID NO> is = "<<id<<endl;
        cout<<"Student name = "<<name<<endl;
    }

    };



int main(){
    student s1,s2,s3;

    s1.display();
    s2.display();
    s3.display();
    
}