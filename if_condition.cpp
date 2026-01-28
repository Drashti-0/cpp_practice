#include <iostream>
using namespace std;

int main()
{
    // password:2008

    int p;
    do
    {  cout<<"Enter password: "<<endl;
        cin>>p;

        if (p == 2008)
        {
            cout << "Name is Drashti bhanderi" << endl;
        }
        else
        {
            cout << "Password is incorrect" << endl;
        }

    } while (p!=2008);
}