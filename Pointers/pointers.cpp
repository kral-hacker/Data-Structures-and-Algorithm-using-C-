#include <iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;
    
    
    //adress of operator - &
    //It returns the address of the variable

    cout<<"Address of num is: "<< &num <<endl; //Hexadecimal Address

    //Making a pointer

    int *ptr = &num;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"value is : "<<*ptr<<endl;

    double d  = 4.3;
    double *p = &d;

    cout<<"Address is : "<<p<<endl;
    cout<<"value is : "<<*p<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<< endl;
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;

    int i = 45;
    int *pointer = 0;
    pointer = &i;

    cout<<"Value of i is: "<<*pointer<<endl;
    cout<<"Address of i is: "<<pointer<<endl;
 
    int a = 5;
    int b = a;
    b++;
    cout<<b<<endl;
    cout<<a<<endl;

    //Copying a pointer

    
}