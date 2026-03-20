#include<iostream>
using namespace std;

// Pizza
int total(int price, int quantity){
    return price * quantity;
}

// Burger
int total(int price, int quantity, int packaging){
    return (price * quantity) + packaging;
}

int main(){

    int pizzaTotal = total(200, 2); 
    int burgerTotal = total(100, 3, 20);

    cout<<"Pizza Total Price: "<<pizzaTotal<<endl;
    cout<<"Burger Total Price: "<<burgerTotal<<endl;

    return 0;
}