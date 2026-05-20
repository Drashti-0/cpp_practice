#include <iostream>
using namespace std;

// Base Class
class Employee {

public:
    virtual void calculateSalary() = 0;
};

// Manager Class
class Manager : public Employee {

public:
    void calculateSalary() {

        cout << "Manager Salary : 50000" << endl;
    }
};

// Developer Class
class Developer : public Employee {

public:
    void calculateSalary() {

        cout << "Developer Salary : 30000" << endl;
    }
};

int main() {

    Manager m;
    Developer d;

    Employee* e;

    e = &m;
    e->calculateSalary();

    e = &d;
    e->calculateSalary();

    return 0;
}
