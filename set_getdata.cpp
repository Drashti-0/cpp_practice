#include <iostream>
using namespace std;

class countcall {
    int num;
    static int count;   // declaration

public:
    void setdata() {
        cout << "Enter employee number: ";
        cin >> num;
        count++;
    }

    void disdata() {
        cout << "Employee number is: " << num << endl;
        cout << "Employee count is: " << count << endl;
    }
};

// static variable definition
int countcall::count = 0;

int main() {
    countcall c1, c2;

    c1.setdata();
    c1.disdata();

    cout << endl;

    c2.setdata();
    c2.disdata();

    return 0;
}
