#include "iostream"
using namespace std;
int fact(int n){
    //Base case
    //it is mandatory to stop the program or to prevent stack overflow
    //return is mandatory in base case
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
    
}


int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
}