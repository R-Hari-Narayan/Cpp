#include <iostream>
using namespace std;
void func1();
void func2();
int f_counter=0;
void func1(){
    f_counter++;
    cout<<f_counter<<endl;
    func2();
}
void func2(){
    f_counter++;
    func1();
}
int main(){
    func1();
    return 0;
}