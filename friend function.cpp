#include <iostream>
using namespace std;
class A
{
private:
    int x = 10;

public:
    friend void show(A);
};

void show(A obj)
{
    cout << obj.x;
}

int main()
{

    A obj;
    show(obj);
    return 0;
}
