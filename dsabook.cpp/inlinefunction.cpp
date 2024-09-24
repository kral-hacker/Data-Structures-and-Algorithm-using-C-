#include <iostream>
using namespace std;
inline int max(int a, int b){return a>b? a:b;}
main(){
    int a,b;
    cout<<"Enter numbers for the comparison";
    cin>>a>>b;
    cout<<"Max"<<max(a,b);
}