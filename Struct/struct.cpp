#include <iostream>
#include <string>
using namespace std;
// a struct can store multiple variabbles of d/f datatypes

struct Student{
    string name;    // Variables inside a struct are known as members
    int roll;
    int age;
    bool enroll = true;
    
};

int main(){
    Student student1;
    student1.name = "Ananay Tyagi";
    student1.roll = 78;
    student1.age = 20;


    cout<<"The name of the student 1 is : "<<student1.name<<endl;
    cout<<"The roll of the student 1 is : "<<student1.age<<endl;
    cout<<"The age of the student 1 is : "<<student1.roll<<endl;
    cout<<"The enrolled ? of the student 1 is : "<<student1.enroll<<endl;

}