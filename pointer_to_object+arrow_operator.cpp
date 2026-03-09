#include<iostream>
using namespace std;

class store{

    protected:
    string model;
    int price;

    public:
    store(int p,string m){
        price=p;
        model=m;
    }

    void display(){
        cout<<"Model name is = "<<model<<endl;
        cout<<"model price is = "<<price<<endl;
    }

    
};

int main(){
     // Object pointer using new
    store *ptr = new store(5000,"drashti");


    // Access using arrow operator
    ptr->display();

     // Free memory
    delete ptr;

}