#include <iostream>
using namespace std;


/*

1
22
333
4444
55555

*/

class solution
{
public:
    void pattern4(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            int num = i;
            for (int j = 1; j <= i; j++)
            {
                cout << num;
            }
            cout << endl;
        }
    }
};

int main()
{
    solution s1;
    s1.pattern4(5);
}