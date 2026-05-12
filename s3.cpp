#include <iostream>
using namespace std;


class product{
    float price;
    int qunt;

    public:

    product(float p, int q=1){
        price=p;
        qunt=q;
    }

    float total(){
        return price*qunt;

    }

    float add(product p){
        return total() + p.total();
    }


};

int main() {
    
    product p1(100, 2);   
    product p2(50);    

     float result = p1.add(p2);

    cout << "Final Total Cost = " << result;


    return 0;
}
