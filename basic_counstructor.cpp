#include<iostream>
using namespace std;

class car{

    private:
    string car_name;
    int price;

    public:

    car(){
        car_name="BMW";
        price=500000;

    }

    void disdata(){
        cout<<"CAR NAME: "<<car_name<<endl;
        cout<<"price: "<<price<<endl;
        
    }

};

int main(){
    car c1;

    c1.disdata();
}