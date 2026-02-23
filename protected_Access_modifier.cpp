#include<iostream>
using namespace std;

class parent{
     private: 
     int id;

     protected:
     int age;

     public:

     void set(int aage,int iid){
        id=iid;
        age=aage;
     }
     void showParent()
    {
        cout << "ID (inside Parent) = " << id << endl;
    }
};

class Child : public parent{
    public:
    void display(){
             // cout << id;  Not accessible (private)
            cout<<"age is : "<<age<<endl;


    }


};

int main(){
      Child c1;

    c1.set(5, 20);

    c1.display();      // shows age
    c1.showParent();   // shows id via public function



}