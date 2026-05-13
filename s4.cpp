#include <iostream>
using namespace std;

class bank
{

private:
    float bal; 


    public:

    bank(float balance = 5000)
    {
        bal = balance;
    }


  float getBalance()
    {
        return bal;
    }

        // add two accounts
    float addmoney(bank obj)
    {
        return bal + obj.bal;
    }
  
};

int main()
{  
    // INR object  
    bank inr(5000);

    // USD object (100 USD = 8000 INR)
    bank usd(100 * 80);

    // Addition
    float finalbal = inr.addmoney(usd);

    cout << "Final Balance in INR = " << finalbal << endl;


    return 0;
}
