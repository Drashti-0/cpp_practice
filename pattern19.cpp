#include <iostream>
using namespace std;

int main() {
    int n = 6;

    // Top full line
    for(int i=0;i<2*n;i++){
        cout<<"*";
    }
    cout<<endl;

    // Upper part
    for(int i=n-1;i>=1;i--){
        // left stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        // spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        // right stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    

    // Lower part
    for(int i=1;i<=n;i++){
        // left stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        // spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        // right stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    

    return 0;
}