#include <iostream>
using namespace std;

class employee
{
    string id;
    double salary;

public:
    static int count;

    employee()
    {
        count++;
        id = "25CS" + to_string(100 + count);
        // to_string() is a function in C++ that converts a number into a string.

        cout << "Enter salary: ";
        cin >> salary;
    }

    // Display (no modification)
    void display() const
    {
        cout << "\nID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }

    // Friend function
    friend void audit(employee e);
};

// Static variable
int employee::count = 0;

// Friend function (outside class)
void audit(employee e)
{
    cout << "\n[Audit] Salary Access: " << e.salary << endl;
}

int main()
{

    employee e1;
    employee e2;

    e1.display();
    e2.display();

    cout << "\nTotal Employees: " << employee::count << endl;

    audit(e1);

    return 0;
}