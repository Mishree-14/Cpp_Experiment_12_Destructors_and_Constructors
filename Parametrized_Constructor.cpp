//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class fetch{
    public:
    int a,b;

    //Prameterized constructor
    fetch(int m, int n){
        a = m;
        b = n;
    }

    void disp(){
        cout<<"A is "<<a<<"\n";
        cout<<"B is "<<b<<"\n";
    }
};

int main() {
    fetch f1(2,3);
    
    f1.disp();

    return 0;
}

// OUTPUT:

//A is 2
//B is 3 
