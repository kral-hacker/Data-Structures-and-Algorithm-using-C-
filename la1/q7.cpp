//Ananay Tyagi(E22CSEU0078)
//Q7
// #include <string>
#include <iostream>
using namespace std;
int main(){
    int numarr[10];
    int d;
    cout<<"Enter a decimal number: ";
    cin>>d;
    int r;
    int n;
    int i=0;
    while(d>0){
        numarr[i]=d%2;
        d=d/2;
        i++;
        }
    cout<<"Binary Representation: ";
    for (int j=i-1;j>=0;j--){
        cout<<numarr[j];
    }

}