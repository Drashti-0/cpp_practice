#include <iostream>
using namespace std;

int main()
{
    int choice, a, b;

    cout << "-------Welcome to our menu driven proogramm------- " << endl;
    do
    {
        cout << "Enter first  number: " << endl;
        cin >> a;

        cout << "Enter your seconf number: " << endl;
        cin >> b;

        cout << "1.addition" << endl
             << "2.substraction" << endl
             << "3.multiplie" << endl
             << "4.devide" << endl
             <<"5.Exit"<<endl;

        cout << "Enter your choice: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            int add = a + b;
            cout << "addition = " << add << endl;
        }

        else if (choice == 2)
        {
            int sub = a - b;
            cout << "Substraction = " << sub;
        }

        else if (choice == 3)
        {
            int multi = a * b;
            cout << "Multiplie = " << multi;
        }

        else if (choice == 4)
        {
            int divide = a / b;
            cout << "Divided = " << divide << endl;
        }

    } while (choice != 5);
    {
        cout<<"Exit"<<endl;
    }

    return 0;
}