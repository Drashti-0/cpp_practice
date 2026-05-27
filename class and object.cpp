#include <iostream>
using namespace std;

class student{

public:
string name;
int marks;

void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"marks:  "<<marks<<endl;

}
};

int main() {

    student s1;

    s1.name="Drashti";
    s1.marks=1000;

    s1.display();
    
    return 0;
}

