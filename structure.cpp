//Structures are the user defined variables of different datatypes that are used to store into a single variable

#include <iostream>
#include <string>
using namespace std;
int main(){
struct mystruct{
    int num;
    string name;
    };
    //We have to create an instance to use other variables inside the data structure
    mystruct myvar;
    myvar.num = 1;
    myvar.name = "Ananay Tyagi";

    cout<<"Num: "<<myvar.num<<endl;
    cout<<"Name: "<<myvar.name<<endl;
}

