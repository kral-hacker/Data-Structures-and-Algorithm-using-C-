#include <bits/stdc++.h>
using namespace std;

int division(int num1, int num2){
    if(num2==0) throw num1;

    return num1/num2;
}

int main(){
    try{
    int result = division(6,0);
    cout<<result<<endl;
    }

    catch(string e){
        cout<<"exception form an integer is "<<e<<"a number cannot be divided by zero";
    }
}