#include <iostream>
using namespace std;
int main(){
    //When a variable is declared as reference, it becomes an alternative name for an existing variable.
    int a = 20;
    //ref is a reference to x
    int& ref = a;

    ref = 30;
    cout<<"a: "<<a<<endl;


    a = 45;
    cout<<"ref: "<<ref;

}