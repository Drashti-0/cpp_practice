#include<iostream>
using namespace std;

class food{
    private:

    int price;
    int quntt;
    int pcharge;
    int totalp;

    public:

    void fooditeam(int p){
        cout<<"Enter your pizza quantity: "<<endl;
        cin>>quntt;

        totalp = p*quntt;

        cout<<"total price of pizza: "<<totalp<<endl;
    }

    void fooditeam(int price,int pcharge){
        cout<<"Enter your Burgerquntity: "<<endl;
        cin>>quntt;

        totalp= (price*quntt)+pcharge;

        cout<<"total price of burger: "<<totalp<<endl;
    }


};

int main(){
    food p,b;

    p.fooditeam(200);
    b.fooditeam(70,50);
}


