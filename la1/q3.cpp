//q
//Ananay Tyagi(E22CSEU0078)
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter price of the first mobile phone";
    cin>>a;
    cout<<"Enter the price of the second phone";
    cin>>b;
    cout<<"Enter the price of the second phone";
    cin>>c;
    if(a<b and a<c){
        cout<<"First mobile is the best deal in smartphone which price is: "<<a;
    }
    else if(b<a and b<c){
        cout<<"Second mobile is the best deal in smartphone which price is: "<<b;
    }
    else{
        cout<<"Third mobile is the best deal in smartphone :"<<c;
    }
    return 0;
}
