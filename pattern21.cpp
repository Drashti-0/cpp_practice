#include <iostream>
using namespace std;

class solution
{
public:
    void pattern21(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(i==0 || i==n-1 || j==0 || j==n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }

            }
            cout<<endl;
        }
    }
};

int main()
{
    solution s1;
    s1.pattern21(4);
}