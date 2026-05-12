#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;

    static int count;

public:
    student(int r, string n = "Unknown")
    {
        roll = r;
        name = n;
        count++;
    }

    void show() const
    {
        cout << "name : " << name << endl;
        cout << "roll : " << roll << endl;
      
    }

    static void total()
    {
        cout << "total students : " << count << endl;
    }
};

int student::count = 0;
int main()
{
    student s1(1, "Drashti");
    student s2(12);
    student s3(10, "dhruti");

    s1.show();
    s2.show();
    s3.show();


    return 0;
}
