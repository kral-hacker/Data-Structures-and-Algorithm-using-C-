#include <iostream>
using namespace std;

// class A{
//     public:
//     int x;
//     A(int a){ // parameterized constructor
//         x=a;
//     }

//     A(A &i){ // copy constructor
//         x = i.x;
//     }
//     ~A(){ // there is only one destructotr in the class
//     }; // destructor
// };


// int main(){
//     A z(10);
//     cout<<z.x<<" "<<endl;
    
//     A y(z);
//     cout<<y.x<<" "<<endl;
// }

class Circle{
    private:
    int radius;

    public:
    Circle(int r){
        radius = r;
    }

    void area(){
        cout<<"The area of the circle is : "<< (float)3.14*radius*radius << endl;
    }
    void circumference(){
        cout<<"The circumference of the circle is : "<< 2*3.14*radius << endl; 
    }
};

int main(){
    int r;
    cout<< "Enter the radius of the circle : "<<endl;
    cin>>r;
    Circle z(r);
    z.area();
    z.circumference();  
}