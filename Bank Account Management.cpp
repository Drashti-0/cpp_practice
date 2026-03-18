#include<iostream>
using namespace std;

class bank{

private:

int num;
string aname;
double balance;

public:

bank(){
    cout<<"Enter your account number:"<<endl;
    cin>>num;

    cout<<"Enter your account name: "<<endl;
    cin>>aname;

    cout<<"Enter your balance: "<<endl;
    cin>>balance;
}

void depositmoney(){

    double amt;

    cout<<"How many money you can deposit: "<<endl;
    cin>>amt;

    if(amt<=0){
        cout<<"Sorry we do not deposit money"<<endl;
    }
    else{
        balance = balance + amt;
    }
}

void withdrawmoney(){

    double amt;

    cout<<"How many money you can withdraw: "<<endl;
    cin>>amt;

    if(amt<=0 || amt>balance){
        cout<<"Sorry you can't withdraw money"<<endl;
    }
    else{
        balance = balance - amt;
    }
}

void display(){
    cout<<"Account number : "<<num<<endl;
    cout<<"Name : " <<aname<<endl;
    cout<<"Balance : "<<balance<<endl;
}

};

int main(){

int n;

cout<<"Enter number: ";
cin>>n;

bank b[n];

for(int i=0;i<n;i++){

    b[i].depositmoney();
    b[i].withdrawmoney();
    b[i].display();
}

}