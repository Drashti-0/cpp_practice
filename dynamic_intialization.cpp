#include <iostream>
using namespace std;

class interest
{
private:
    int p, r, t;

public:
    interest(int pp, int rr, int tt)
    {
        p = pp;
        r = rr;
        t = tt;
    }
    int emi()
    {
         return (p * r * t) / 100;
    }

    void display()
    {
        cout << "principle amount = " << p << endl;
        cout << "rate of change = " << r << " %" << endl;
        cout << "tenure = " << t << endl;
        cout << "emi = " << emi() << endl;
    }
};
int main()
{

    interest i1(50000,8,36);
    i1.display();
}