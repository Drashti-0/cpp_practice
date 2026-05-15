#include <iostream>
using namespace std;

int c = 0;
int fact(int n)
{
    c++;

    cout << "fact " << n << endl;

    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{

    int n;

    cout << "enter number: ";
    cin >> n;

    cout << endl;
    cout << "------------------" << endl;
    cout << "****factorial****" << endl;
    cout << "------------------" << endl;

    cout << endl;

    cout << "factorial = " << fact(n) << endl;

    return 0;
}
