#include <iostream>
using namespace std;
int main(){
    //WHeteher the number is positive or negative


    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"The value of a is positive."<<endl;
    // }
    // else{
    //     cout<<"The value of a is negative"<<endl;
    // }

    // int a,b;
    // cin>>a>>b;
    // // a=cin.get(); //return ascii value of the number 
    // cout<<"A value:"<<a<<endl;
    // cout<<"B value:"<<b<<endl;
    // if(a>0){
    //     cout<<"A is positive."<<endl;
    // }
    // else{
    //     if(a<0){
    //         cout<<"A is negative ."<<endl;
    //     }
    //     else{
    //         cout<<"A is zero"<<endl;
    //     }
    // }



    //while loop
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++; 
    // }

    // Pattern printing 

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }


//Pattern Printing Question 2
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }cout<<endl;
    //     i++;
    // }

    //Pattern Printing question 3
//     int n;
//     cin>>n;
//     int i=1;
//     int count = 1;
// while(i<=n){
//     int j=1;

//     while(j<=n){
//         cout<<count;
//         count++;
//         j++;
//     }cout<<endl;
//     i++;
// }

//Pattern printing question 3
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }cout<<endl;
//     i++;
// }
}