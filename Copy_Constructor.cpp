//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class fetch{
    public:
    int a,b;
    
    fetch(){
        a = 3;
        b = 4;
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
    fetch f3(f1);
    
    f1.disp();
    f3.disp();

    return 0;
}


//OUTPUT:

//A is 3
//B is 4
//A is 3
//B is 4
