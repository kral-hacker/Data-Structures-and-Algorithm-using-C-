#include <iostream>
using namespace std;

// Prefix increment using the member function
// class Counter{
//     private:
//     int value;
//     public:
//     Counter(int v){
//         value = v;
//     }
//     Counter& operator ++(){ // unary operator takes no arguments in the member function
//         ++value;
//         *this; // return updated object
//     }

//     void display(){
//         cout<< "Value: " << value <<endl;
//     }
// };

// int main(){
//     Counter c(10);
//     cout<<"Value before the update: ";
//     c.display();
//     ++c;
//     cout<<"Value after the update: ";
//     c.display();
// }

// Postfix Increment using the member function
// class Counter{
//     private:
//     int value;

//     public:
//     Counter(int v){
//         value = v;
//     }

//     Counter operator ++(int){ // Thats how u differentiate b/w the postfix and the prefix
//         Counter temp = *this;
//         ++value;
//         return temp;
//     }

//     void display(){
//         cout<< "Value: " << value <<endl;
//     }
// };

// int main(){
//     Counter c(10);
//     c.display();
//     c++;
//     c.display();
// }

// Prefix Increment uaing the friend function
// class Counter{
//     private:
//     int value;
//     public:
//     Counter(int v){
//         value = v;
//     }
//     void display(){
//         cout<< "Value: " << value <<endl;
//     }

//     friend Counter& operator ++(Counter& c);
// };

// Counter& operator ++(Counter& c){ // with the friend function the operator can take one argument 
//     ++c.value;
//     return c;
// }

// int main(){
//     Counter c(5);
//     c.display();
//     ++c;
//     c.display();
// }

// Postfix Increment using the member function

// class Counter{
//     private:
//     int value;
//     public:
//     Counter(int v){
//         value = v;
//     }
//     void display(){
//             cout<< "Value: " << value <<endl;
//         }
        

//     friend Counter operator ++(Counter& c, int); // declaring this as the postfix;
// };
// Counter operator ++(Counter& c, int){
//     Counter temp = c;
//     ++c.value;
//     return temp;
// }


// int main(){
//     Counter c(5);
//     c.display();
//     c++;
//     c.display();
// }

// Binary Operator Overloading using the member function

// class Counter{
//     private:
//     double real, imag;
//     public:
//     Counter(double r, double i){
//         real = r;
//         imag = i;
//     }

//     Counter operator +(const Counter& obj){
//         return Counter(real + obj.real, imag + obj.imag);
//     }

//     void display(){
//         cout << real << "+" << imag << "i" << endl;
//     }
// };

// int main(){
//     Counter c1(3,4);
//     c1.display();
//     Counter c2(10,20);
//     Counter sum = c1 + c2;
//     sum.display(); 
// }

// prefix unary using the member function
// class counter{
//     private:
//     int value;
//     public:
//     counter(int v){
//         value = v;
//     }
//     counter& operator ++(){
//         ++value;
//         return *this;
//     }
//     void display(){
//         int a;
//         a = value;
//         cout << a;
//     }
// };

// int main(){
//     counter c(12);
//     c.display();
//     ++c;
//     c.display();
// }

// postfix ++ through a member function
// class counter{
//     private:
//     int value;
//     public:
//     counter(int v){
//         value = v;
//     }
//     counter operator ++(int){
//         counter temp = *this;
//         ++value;
//         return temp;
//     }
//     void display(){
//         int a;
//         a = value;
//         cout << a;
//     }
// };
// int main(){
//     counter c(12);
//     c.display();
//     c++;
//     c.display();
// }

// class counter{
//     private:
//     int value;
//     public:
//     counter(int v){
//         value = v;
//     }
//     void display(){
//         int a;
//         a = value;
//         cout << a;
//     }
//     friend counter& operator ++(counter& c);
// };

// counter& operator++(counter& c){
//     ++c.value;
//     return c;
// }

// class counter{
//     private:
//     int value;
//     public:
//     counter(int a){
//         value = a;
//     }
//     void display(){
//         int a = value;
//         cout << a;
//     }
//     friend counter operator ++ (counter&c, int);
// };

// counter operator++(counter&c, int){
//     counter temp = c;
//     ++c.value;
//     return temp;
// }
// int main(){
//     counter c(5);
//     c++;
//     c.display();
// }

// Oveloading the binary + operator for the member function
class Counter{
    int real;
    int imag;
    public:
    Counter(int r, int i){
        real = r;
        imag = i;
    }
    Counter operator +(Counter obj){
        return Counter(real + obj.real,imag + obj.imag);
    }
    void display(){
        cout << real << "+" << imag << "i" << endl;
    }
};

int main(){
    Counter a(2,3);
    Counter b(4,5);
    Counter c = a+b;
    c.display();
}
