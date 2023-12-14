//Object oriented programming day 2

#include <iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am in A class"<< endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I am in B class"<< endl;
    }
};

class C: public A, public B{
    public:
    int x;
    //Operator overloading
    void operator+ (C &ch){
    cout<< "I am plus"<< endl;
    }
};

//Function overloading
void print(){
    cout<< "Hello World"<< endl;
}
void print(int a){
    cout<< a<< endl;
}



int main(){
    C obj;
    //Inheritance ambiguity
    obj.A::func();
    obj.B::func();
    print();
    print(23);
    obj+obj;
    return 0;
}