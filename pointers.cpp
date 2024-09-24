#include <iostream>
using namespace std;
void geeks(){
    int a = 20;
    // The datatypr of your variable and pointer must be same

    //Defing a pointer
    int* ptr;
    ptr = &a;

    cout<<"Value at ptr "<<ptr<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of *ptr "<<*ptr<<endl;

}
int main(){
    geeks();
}