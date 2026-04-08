#include <iostream>
using namespace std;

class student
{

private:
    string name;
    int id;
    int marks[5];

public:
    student()
    {
        cout << "Enter your name: " << endl;
        cin >> name;

        cout << "Enter your id : " << endl;
        cin >> id;

        cout << "Enter your marks: " << endl;

        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        cout << "your name: " << name << endl;
        cout << "Your id " << id << endl;
    }

    friend void avg(student b1);
};

void avg(student s1)
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += s1.marks[i];
    }

    int avg = sum / 5;

    cout << "avarage mark: " << avg << endl;
}

int main()
{
    student b1;

    avg(b1);
}