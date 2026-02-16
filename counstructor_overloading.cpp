#include <iostream>
using namespace std;

class box
{

private:
    int l, w, h;

public:
    box()
    {
        l = w = h = 1;
    }

   box(int side)
{
    l = w = h = side;
}


    box(int ln, int wd, int hi)
    {
        l = ln;
        w = wd;
        h = hi;
    }
    int volume()
    {
        return l * w * h;
    }

    void disdata()
    {
        cout << "Length = " << l << endl;
        cout << "Width = " << w << endl;
        cout << "Height = " << h << endl;
        cout << "Volume = " << volume() << endl;
    }
};
int main()
{

    box b1;          // 0 parameter for cube
    box b2(5);       // 1 parameter for cube
    box b3(2, 3, 4); // 3 parameter for box

    b1.disdata();

    b2.disdata();

    b3.disdata();
}