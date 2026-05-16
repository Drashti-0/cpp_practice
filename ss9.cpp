#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;

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
    int marks;

public:
    Student(string n, int a, int m) : Person(n, a)
    {
        marks = m;

        cout << "Student constructor called" << endl;
    }

    void displayStudent()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student()
    {
        cout << "Student destructor called" << endl;
    }
};

// Derived class Teacher
class Teacher : public Person
{
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a)
    {
        subject = s;

        cout << "Teacher constructor called" << endl;
    }

    void displayTeacher()
    {
        cout << "\n--- Teacher Details ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Subject : " << subject << endl;
    }

    ~Teacher()
    {
        cout << "Teacher destructor called" << endl;
    }
};


int main() {
    Student s1("Drashti", 18, 95);
    s1.displayStudent();

    cout << endl;

    Teacher t1("Riya", 35, "C++");
    t1.displayTeacher();
    
    return 0;
}
