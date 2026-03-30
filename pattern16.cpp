


/*

A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;

class p{
public:

void patteren3(int n){
   
    char c = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c;
        }
        c++;
        cout<<endl;
    }

}
};

int main() {
    p p2;
    p2.patteren3(5);
    return 0;
}