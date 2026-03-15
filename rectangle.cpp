#include<iostream>
using namespace std;

class rectangle{

    private:
    int l,w;

    public:

    int a(int l,int w){
        return l*w;
    }

  int p(int l,int w){
        return 2*(l+b);
    }

    void setdata(int length,int width){
        l=length;
        w=width;

    }

    void disdata(){
        cout<<"Length: "<<l<<endl;
        cout<<"Width: "<<w<<endl;

        cout<<"Area is : "<<a(l,w)<<endl;
        cout<<"Perimeter: "<<p(l,w)<<endl;
    }


};

int main(){

    rectangle r1;

    r1.setdata(5,2);
    r1.disdata();
}