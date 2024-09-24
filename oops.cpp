#include <iostream>
using namespace std;
class calculate{ // here we created a class
    public:      //Access modifier
    int num1 =50;//Data members
    int num2= 56;
    int addition(){     //Member function
        int add = num1+num2;
        cout<<"Addition: "<<add;
    }
};
int main(){
    calculate obj;  //creating an object for the class
    obj.addition();//we must create an obj for the class because to allocate it in the memory and 
    //to use it data members
    return 0;
}