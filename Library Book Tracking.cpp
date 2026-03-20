#include<iostream>
using namespace std;

class book{

    private:
    int id;
    string title;
    string bauthor;
    bool available;

    public:

    void setdata(){
        cout<<"Enter your Book id : "<<endl;
        cin>>id;

        cout<<"Enter your Book title: "<<endl;
        cin>>title;

        cout<<"Enter your book author: "<<endl;
        cin>>bauthor;

        available = true;
    }

    void borrowBook(){
        if(available==true){
            available=false;
            cout<<"Book borrowed"<<endl;
        }
        else{
            cout<<"Book is already borrowed"<<endl;
        }
    }

    void returnBook(){
        available = true;
        cout<<"Book Returned"<<endl;
    }

    void display(){
        cout<<"Book ID: "<<id<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<bauthor<<endl;

        if(available == true)
        cout<<"Status: Available"<<endl;
        else
        cout<<"Status: Borrowed"<<endl;
    }

};

int main(){

    book b1;

    b1.setdata();
    b1.display();

    b1.borrowBook();
    b1.display();

    b1.returnBook();
    b1.display();

}