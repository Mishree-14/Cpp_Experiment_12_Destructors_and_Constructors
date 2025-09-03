//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

int count = 0;
class destruct{
    public:
    destruct(){             //Constructor
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~destruct(){            //Destructor
        count--;
        cout<<"No. of objects destroyed: "<<count<<endl;
    }
};

int main(void) {
    
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
}

# OUTPUT:

No. of objects created: 1
No. of objects created: 2
No. of objects created: 3
No. of objects created: 4
No. of objects destroyed: 3
No. of objects destroyed: 2
No. of objects destroyed: 1
No. of objects destroyed: 0
