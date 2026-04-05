#include<iostream>
using namespace std;

class uni{

protected:
int id;
string name;
string department;

public:

uni(){
cout<<"Enter student id: ";
cin>>id;

cout<<"Enter student name: ";
cin>>name;

cout<<"Enter department: ";
cin>>department;
}

};

// ------------------ Undergraduate ------------------

class undergraduated : public uni{

int *marks;

public:

undergraduated(){

marks = new int[5];   // dynamic memory

cout<<"Enter five subject marks: "<<endl;

for(int i=0;i<5;i++){
cin>>marks[i];
}

}

int total(){

int sum=0;

for(int i=0;i<5;i++){
sum = sum + marks[i];
}

return sum;
}

// function overloading
float average(){

return total()/5.0;
}

// inline function
inline float percentage(){

return (total()/500.0)*100;
}

void display(){

cout<<"\n--- Undergraduate Student ---"<<endl;
cout<<"ID: "<<id<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Department: "<<department<<endl;

cout<<"Total Marks: "<<total()<<endl;
cout<<"Average Marks: "<<average()<<endl;
cout<<"Percentage: "<<percentage()<<"%"<<endl;

}

~undergraduated(){
delete[] marks;
}

};

// ------------------ Postgraduate ------------------

class postgraduate : public uni{

int *marks;
int research;

public:

postgraduate(){

marks = new int[3];

cout<<"Enter three subject marks: "<<endl;

for(int i=0;i<3;i++){
cin>>marks[i];
}

cout<<"Enter research score: ";
cin>>research;

}

int total(){

int sum=0;

for(int i=0;i<3;i++){
sum = sum + marks[i];
}

sum = sum + research;

return sum;

}

// function overloading
float average(){

return total()/4.0;
}

// inline function
inline float percentage(){

return (total()/400.0)*100;
}

void display(){

cout<<"\n--- Postgraduate Student ---"<<endl;
cout<<"ID: "<<id<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Department: "<<department<<endl;

cout<<"Total Marks: "<<total()<<endl;
cout<<"Average Marks: "<<average()<<endl;
cout<<"Percentage: "<<percentage()<<"%"<<endl;

}

~postgraduate(){
delete[] marks;
}

};

// ------------------ main ------------------

int main(){

undergraduated u;
u.display();

postgraduate p;
p.display();

}