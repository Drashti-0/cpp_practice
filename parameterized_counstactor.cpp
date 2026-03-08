#include<iostream>
using namespace std;

class rectangle{

    private:
    int l;
    int w;


    public:
    rectangle(int ln,int wn){
        l=ln;
        w=wn;
    }
   int area(){
     return l*w;
    }

    void disdata(){
        cout<<"Rectangle lenth "<<l<<endl;
        cout<<"Rectangle width "<<w<<endl;
        cout<<"Rectangle area is"<< area() <<endl;

    }
};
int  main(){
      rectangle r1;

      r1.disdata(10,5);
 cout<<endl;
     r2.disdata(5,2);




}

