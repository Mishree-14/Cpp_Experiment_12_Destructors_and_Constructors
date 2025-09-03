//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class student{
    int prn;
    string name;
    int fee;
    public:
    student(int rn, string nm, int fe){
        prn = rn;
        name = nm;
        fee = fe;
    }
    student(student &t){
        prn = t.prn;
        name = t.name;
        fee = t.fee;
    }
    
    void dispaly(){
        cout<<endl<<prn<<"\t"<<name<<"\t"<<fee;
    }
};

int main() {
    
    student s(15, "Student1", 10000);
    s.dispaly();
    student Student1(s);
    Student1.dispaly();
    
    return 0;
}

//OUTPUT:

//15	Student1	10000
//15	Student1	10000
