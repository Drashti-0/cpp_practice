#include <iostream>
using namespace std;

class student
{

private:
    int id;
    string name;
    float mark;

public:

    void setdata(int i,string n,float m){
        id=i;
        name=n;
        mark=m;

    }

    void disdata()
    {
        cout << "Roll no. " << id << endl;
              cout << "Name : " << name << endl;
              cout << "Mark: " << mark << endl;
    }
};

int main(){
    student s1;

    s1.setdata(5,"DRA",98);
    s1.disdata();
}