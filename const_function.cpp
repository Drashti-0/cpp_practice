#include<iostream>
using namespace std;

class Demo
{
public:
    void display() const   // const member function
    {
        cout<<"Hello";
    }
};

int main()
{
    const Demo d;   // const object

    d.display();    // calling member function

    return 0;
}