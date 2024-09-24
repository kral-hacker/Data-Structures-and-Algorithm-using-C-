//program to show diffrence between decalaration and intialization
#include "iostream"
using namespace std;
int main(){
    int a;  //decalaration
    a=10; //initalization
    int b= 10; //Decalaration and intialization both
    char a123= 'b'; //data type char which is used tto store only one character
    float c;    //here c has beeen decalared but not intitalized so a garbage value has been given to it
    //till it is intialized
    cout<<a123;
    return 0;
}