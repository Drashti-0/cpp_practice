// counstructor+inheritance+copy

#include <iostream>
using namespace std;

class employe
{
protected:
    int salary;
    string name;

public:
    // Parameterized Constructor
    employe(string n, int s)
    {
        salary = s;
        name = n;
        cout << "\nEmployee Constructor Called" << endl;
    }

    // Copy Constructor
    employe(employe &n)
    {
        name = n.name;
        salary = n.salary;
        cout << "Employee Copy Constructor Called" << endl;
    }

    // Destructor
    ~employe()
    {
        cout << "Employee Destructor Called" << endl;
    }

    void staf()
    {
        cout << "Employee Name   : " << name << endl;
        cout << "Employee Salary : " << salary << endl;
    }
};

// class manager inheritance in employe
class manager : public employe
{
public:
   
     // counstructor called(is must important)
    manager(string n, int s) : employe(n, s)
    {
        cout << "Manager Constructor Called" << endl;
    }

    // Copy Constructor
    //  manager choose for copy counstructior --m-- so as is well employee sem
    manager(manager &m) : employe(m)
    {
        cout << "Manager Copy Constructor Called" << endl;
    }

    // Destructor
    ~manager()
    {
        cout << "Manager Destructor Called" << endl;
    }

    void mana()
    {
        cout << "\n----- Manager Details -----" << endl;
        cout << "Manager Name   : " << name << endl;
        cout << "Manager Salary : " << salary << endl;
        cout << "---------------------------" << endl;
    }
};

int main()
{
    cout << "===== Creating First Object =====" << endl;

    manager m1("Drashti", 5000);
    m1.mana();

    cout << "\n===== Copy Constructor Called =====" << endl;

    manager m2(m1);
    m2.mana();

    cout << "\n===== Program End =====" << endl;

    return 0;
}
