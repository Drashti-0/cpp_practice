#include <iostream>
using namespace std;


class test{
    public:
    static int count;
test(){
    count++;
}

static void show(){
    cout<<count;
}

};

int test::count = 0;


int main() {

    test t1,t2;

    test::show();
    
    return 0;
}
