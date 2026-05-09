#include <iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream fin("test.txt");
    string data;

    fin>>data;
    cout<<data;

    fin.close();
    
    return 0;
}
