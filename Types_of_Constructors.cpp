//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class fetch{
    public:
    int a,b;

    //Default Constructor
    fetch(){
        a = 3;
        b = 4;
    }

    //Prameterized constructor
    fetch(int m, int n){
        a = m;
        b = n;
    }

    //Constructor into constructor
    //Copy constructor
    fetch(fetch &obj){
        a = obj.a;
        b = obj.b;
    }

    void disp(){
        cout<<"A is "<<a<<"\n";
        cout<<"B is "<<b<<"\n";
    }
};

int main() {
    fetch f1;
    fetch f2(2,3);
    fetch f3(f2);
    f1.disp();
    f2.disp();
    f3.disp();

    return 0;
}

#OUTPUT:

A is 3
B is 4
A is 2
B is 3
A is 2
B is 3
