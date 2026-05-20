#include <iostream>
using namespace std;

class Calculator
{

public:
    Calculator()
    {
    }

    void add(int a, int b)
    {
        int sum = a + b;
        cout << "Integer Number Add: " << sum << endl;
    }

    void add(float a, float b)
    {
        float sum = a + b;
        cout << "Floating Number Add: " << sum << endl;
    }

    void add(int a, int b, int c, int d)
    {
        int realadd = a + c;
        int imagnaryadd = b + d;

 
        cout << "Complex Sum: " << to_string(realadd) << " + " << to_string(imagnaryadd) << "i " << endl;
    }
};

int main()
{

    Calculator c1;

    c1.add(5, 5);
    c1.add(5.5f, 5.2f);
    c1.add(2, 3, 4, 5);

    return 0;
}