#include "iostream"
using namespace std;
int main(){
    int a,b;
    cout<<"Enter your weight in killograms: ";
    cin>>a;
    cout<<"Enter your height in meters: ";
    cin>>b;
    int bmi;
    bmi=(a/(b*b));
    // cout<<bmi;
    if(18.5<=bmi<=24.5){
        cout<<"You are perfect.";
    }
    else if(bmi<18){
        cout<<"You are underweight.";
    }
    else{
        cout<<"You are overweight.";
    }
}