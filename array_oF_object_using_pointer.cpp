#include<iostream>
using namespace std;

class book{

    public:  

    string title;
    int price;

    void getdata(){

        cout<<"Enter your Title name: "<<endl;
        cin>>title;

        cout<<"Enter your price: "<<endl;
        cin>>price;
    }

    void display(){
        cout<<"Title name: "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }

};

int main(){
    int n;

    cout<<"Enter your Number: "<<endl;
    cin>>n;

    // Dynamic array using pointer
    book *ptr = new book[n];

    for(int i=0;i<n;i++){
        cout << "Enter details for Book " << i+1 << endl;
        ptr[i].getdata();
    }

    // Display data
    cout << "\n--- Book Details ---\n";
    for(int i = 0; i < n; i++) {
        cout << "\nBook " << i+1 << endl;
        ptr[i].display();
    }

    delete[] ptr;  

}
