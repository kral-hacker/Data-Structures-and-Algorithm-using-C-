//auto storage class is the default class of all the variables dealared inside a block.
//all the local variables decalared inside a block automatically bleong to this class
#include "iostream"
using namespace std;
void autostorageclass(){
    cout<<"Demonstrating auto class"<<endl;
    //decalaring an auto variable
    int a = 10;
    float b= 3.4;
    char c= 'a';
    //printitng the auto variables
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
int main(){
    //demostrate
    autostorageclass();
    return 0;

}