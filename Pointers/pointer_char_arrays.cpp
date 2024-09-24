#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    //char arrays always end with null pointer so their size is +1;
    char ch[6] = "abcde";

    cout<<arr<<endl;
    //In this case it is considering it as a string: 
    cout<<ch<<endl;
    
    char *c = &ch[0];
    //prints entire string
    //cout<<implementation is different in terms of char array;
    cout<<c<<endl;

    char a = 'j';
    char *p = &a;
    cout<<p<<endl;  
}