#include <iostream>
using namespace std;
int fac(int n){
    if(n==0) return 1;
    return n*fac(n-1);
}



int main(){
    int n;
    cout<<"Enter the number to get the factorial for: "<<endl;
    cin>>n;
    int r = fac(n);
    cout<<r;
}