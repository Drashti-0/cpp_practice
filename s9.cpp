#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;
    string id;

    Person(string n = "Drashti", string ID = "25cs003")
    {
        name = n;
        id = ID;

        cout << "Person constructor called" << endl;
    }

    ~Person()
    {
        cout << "Person destructor called" << endl;
    }
};

// Derived class Student
class Student : public Person
{
    int m1, m2;

public:
    int R;

    Student()
    {
        cout << "Student constructor called" << endl;
    }

    void result()
    {
        cout << "\nStudent Name : " << name << endl;
        cout << "Student ID   : " << id << endl;

        cout << "Enter mark 1 : ";
        cin >> m1;

        cout << "Enter mark 2 : ";
        cin >> m2;

        R = (m1 + m2) / 2;

        cout << "Average Marks : " << R << endl;
    }

    ~Student()
    {
        cout << "Student destructor called" << endl;
    }
};

// Derived class Teacher
class Teacher : public Person
{
public:
    string subject;

    Teacher()
    {
        subject = "C++";

        cout << "Teacher constructor called" << endl;
    }

    void display()
    {
        cout << "\nTeacher Name : " << name << endl;
        cout << "Teacher ID   : " << id << endl;
        cout << "Subject      : " << subject << endl;
    }

    ~Teacher()
    {
        cout << "Teacher destructor called" << endl;
    }
};

int main()
{
    Student s1;
    s1.result();

    cout << endl;

    Teacher t1;
    t1.display();

    return 0;
}