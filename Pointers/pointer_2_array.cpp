#include <iostream>
using namespace std;

int main(){
    /*
    //The name of the array indicates the first memory block access

    int arr[10] = {2,5,6,5,7,8,9,2,4,0};
    cout<<"Address of the first memory block is: "<<arr<<endl;
    //using the address operator
    cout<<"Address of the first memory block is: "<< &arr[0]<<endl;

    //Using the star operator

    cout<<"Value at the first memory block is: "<< *arr<<endl;

    // adding 1 at the first memory loaction
    cout<<*arr+1<<endl;
    // value at 1 index
    cout<<*(arr+1)<<endl;

    cout<<"Value at 2nd index: "<<arr[2]<<endl;
    // how things in compiler works: 
    cout<<*(arr+2)<<endl;

    int i = 2;
    cout<<i[arr]<<endl;

   



    int temp[10] = {0};

    cout<<"Size of temp: "<<sizeof(temp)<<endl;
    cout<<sizeof(&temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

     */

    int a[20] = {1,2,3,4,5};

    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

}
