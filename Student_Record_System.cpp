#include<iostream>
using namespace std;

class student{

protected:
int id;
string name;
float m1,m2,m3;

public:

// parameterized constructor
student(int iid , string nname,float mm1,float mm2,float mm3){
    id =iid;
    name=nname;
    m1=mm1;
    m2=mm2;
    m3=mm3;
}

// default constructor
student(){
    cout<<"Enter new student id number: "<<endl;
    cin>>id;

    cout<<"Enter new student name: "<<endl;
    cin>>name;

    cout<<"Enter new student marks:"<<endl;
    cin>>m1>>m2>>m3;
}

// sum function
float sum(float m1, float m2,float m3){
    return m1+m2+m3;
}

// grade function
void grade(float avg){

    if(avg>=80 && avg<=100){
        cout<<"Grade A"<<endl;
    }
    else if(avg>=60 && avg<80){
        cout<<"Grade B"<<endl;
    }
    else{
        cout<<"Grade C (Fail)"<<endl;
    }
}

// display function
void display(){
    cout<<"\nStudent id: "<<id<<endl;
    cout<<"Student name: "<<name<<endl;
    cout<<"Student marks: "<<m1<<" "<<m2<<" "<<m3<<endl;

    float total=sum(m1,m2,m3);
    cout<<"Total marks: "<<total<<endl;

    float avg=total/3;
    cout<<"Average marks: "<<avg<<endl;

    cout<<"Student Grade: ";
    grade(avg);
}

};

int main(){

   student d(3,"Drashti",98,98,98);   // parameterized object
d.display();
    int n;

    cout<<"Enter number of students: "<<endl;
    cin>>n;

    student s[n];   // array of objects

    for(int i=0;i<n;i++){
        s[i].display();
        
    }

}