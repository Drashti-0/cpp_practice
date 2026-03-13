#include<iostream>
using namespace std;

class calculate{

    private:
    int a,b;

    public:

    int add(int a, int b){
        return a+b;
    }

    int minus(int a,int b){
        return a-b;
    }

    int multiply(int a,int b){
        return a*b;
    }
    void setdata(int aa,int bb){
        a=aa;
        b=bb;

    }

    void disdata(){
        cout<<"addtion: "<<add(a,b)<<endl;
        cout<<"Substraction: "<<minus(a,b)<<endl;
        cout<<"Multiplication: "<<multiply(a,b)<<endl;
    }
};

int main(){
    calculate c1;

    c1.setdata(5,3);
    c1.disdata();
}