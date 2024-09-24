//Ananay Tyagi(E22CSEU0078)
//Q9.
#include "iostream"
using namespace std;
int main(){
    int q,r,s,t;
    cout<<"Enter the first number a: ";
    cin>>r;
    cout<<"Enter the second number b: ";
    cin>>s;
    while(s!=0){
        q=r/s;
        t=r%s;
        r=s;
        s=t;
    }
    cout<<"The GCD for the two numbers a and b is : "<<r;
}

