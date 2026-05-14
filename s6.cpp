#include <iostream>
using namespace std;

class discount{
    
    private:
    float tbill;

    public:

    // Constructor
    discount(float bill = 0){
        tbill = bill;
    }

    // Fixed discount (int)
    void applydiscount(int dt){
        cout << "After Fixed Discount: " << tbill - dt << endl;
    }

    // Percentage discount (float)
    void applydiscount(float dt){
        cout << "After Percentage Discount: " 
             << tbill - (tbill * dt / 100) << endl;
    }

    // Promo code (string)
    void applydiscount(string pc){

        if(pc == "SAVE10"){
            cout << "After Promo Discount: " << tbill - 100 << endl;
        }

        else if(pc == "SAVE20"){
            cout << "After Promo Discount: " << tbill - 200 << endl;
        }

        else{
            cout << "Invalid Promo Code" << endl;
        }
    }

};

int main() {

    float bill;

    cout << "Enter original price: ";
    cin >> bill;

    discount d1(bill);

    d1.applydiscount(50);        // integer
    d1.applydiscount(10.0f);     // float
    d1.applydiscount("SAVE10");  // string

    return 0;
}