#include <iostream>
using namespace std;

// class worker{
//     public:
//     int age;
//     char name[10];
//     public:
//     void get(){
//         cout << "Your name pls: " << endl;
//         cin >> name;
//         cout << "Your age pls: " << endl;
//         cin >> age;
//     }
//     void show(){
//         cout << "My name is : " << name << endl;
//         cout << "My age is : " << age << endl;
//     }
// };

// class manager : public worker{
//     int now;
//     public:
//     void get() {
//         worker::get();  // Call base class method
//         cout << "Number of workers under u : " << endl;
//         cin >> now;
//     }
//     void show() {
//         worker::show();  // Call base class method
//         cout << "No. of workers under me are : " << now << endl;
//     }
    
// };

// int main(){
//     worker W1;
//     W1.get();
//     W1.show();
//     manager M1;
//     M1.get();
//     M1.show();
// }

// #include <iostream>
// using namespace std;

// // single inheritance
// class worker{
//     private:
//     int age;
//     char name[10];
//     public:
//     void get();
//     void show();
// };

// void worker :: get(){
//     cout << "enter your name please: " << endl;
//     cin >> name;
//     cout << "Enter your age : " << endl;
//     cin >> age;
// }

// void worker :: show(){
//     cout << name << " " << age << endl;
// }

// class manager : private worker{
//     int now;
//     public:
//     void get(){
//         worker::get();
//         cout << "Enter the number of workers under you : " << endl;
//         cin >> now;
//     }
//     void show(){
//         worker :: show();
//         cout << "The number of workers under me are: " << now << endl;
//     }
// };

// int main(){
//     worker obj;
//     obj.get();
//     obj.show();
//     // cout << obj.name;
//     manager m1;
//     m1.get();
//     m1.show();
// }


// multilevel inheritance
// class worker{
//     private:
//     int age;
//     char name[10];
//     public:
//     void get();
//     void show();
// };

// void worker :: get(){
//     cout << "enter your name please: " << endl;
//     cin >> name;
//     cout << "Enter your age : " << endl;
//     cin >> age;
// }

// void worker :: show(){
//     cout << name << " " << age << endl;
// }

// class manager : private worker{
//     int now;
//     public:
//     void get(){
//         worker::get();
//         cout << "Enter the number of workers under you : " << endl;
//         cin >> now;
//     }
//     void show(){
//         worker :: show();
//         cout << "The number of workers under me are: " << now << endl;
//     }
// };

// class ceo : public manager{
//     int nom;
//     public:
//     void get(){
//         manager :: get();
//         cout << "Enter the number of managers under you :" << endl;
//         cin >> nom;
//     }
//     void show(){
//         manager :: show();
//         cout << "The number of workers under me are: " << nom << endl;
//     }
// };

// int main(){
//     ceo cl;
//     cl.get();
//     cl.show();
// }

// multiple inheritance

// class father{
//     int age;
//     char name[10];
//     public:
//     void get(){
//         cout << "enter the name of your father please: " << endl;
//         cin >> name;
//         cout << "Enter the age of your father : " << endl;
//         cin >> age;
//     }
//     void show(){
//         cout << "Fathers name  : " << name << " Fathers age: " << age;
//     }
// };

// class mother{
//     char name[20];
//     int age;
//     public:
//     void get(){
//         cout << " enter the name of your mother : " << endl;
//         cin >> name;
//         cout << "enter the age of your mother: " << endl;
//         cin >> age;
//     }
//     void show(){
//         cout <<  "Mothers namne: " << name << " Mothers age " << age << endl;
//     }
// };

// class daughter : public father, public mother{
//     char name[20];
//     int age;
//     public:
//     void get(){
//         father :: get();
//         mother :: get();
//         cout << "Enter the childs name: " << endl;
//         cin >> name;
//         cout << "enter the childs age: " << endl;
//         cin >> age;
//     }
//     void show(){
//         father :: show();
//         mother :: show();
//         cout << "childs name : " << name << "Child age : " << age; 
//     }
// };

// int main(){
//     daughter d1;
//     d1.get();
//     d1.show();
// }

// Function names can conflict
// function hiding 
// class A{
//     public:
//     void greet(){
//         cout << "A" << endl;
//     }
// };
// class B{
//     public:
//     void greet(){
//         cout << "B" << endl;
//     }
// };
// class C : public A, public B{
//     public:
//     void greet(){
//         cout << "Derived class func" << endl;
//     };
// };

// int main(){
//     C obj;
//     obj.greet(); 
//     obj.A::greet();
//     obj.B::greet();
// }

// function unhiding 

// class A{
//     public:
//     void greet(){
//         cout << "A" << endl;
//     }
//     void greet(int x){
//         cout << x << endl;
//     }
// };
// class B{
//     public:
//     void greet(){
//         cout << "B" << endl;
//     }
// };
// class C : public A, public B{
//     public:
//     using A :: greet;
//     void greet(){
//         cout << "Derived class func" << endl;
//     };
// };

// int main(){
//     C obj;
//     obj.greet(10);
//     obj.greet();
//     obj.A::greet();
//     obj.B::greet();
// }

// function overriding 

// class A{
//     public:
//     virtual void show(){
//         cout << "Function in the base class" << endl;
//     }
// };
// class B : public A{
//     public:
//     void show() override {
//         cout << "Function in the derived class"  << endl;
//     }
// };
// int main(){
//     A* ptr = new B();
//     ptr->show();
//     ptr->A::show(); // this all the runtime polymorphism
//     delete ptr;
//     ptr = new A();
//     ptr->show();

// }

// virtual classes that solve the diamond problem

// class A{
//     public:
//     void display(){
//         cout << "Display function of the base class" << endl;
//     }
// };
// class B :virtual public A{};
// class C :virtual public A{};

// class D : public B, public C{};

// int main(){
//     D obj;
//     obj.display();
// }


// Solving the diamond problem using the scope resolution operator
// class A{
//     public:
//     void display(){
//         cout << "Display function of the base class" << endl;
//     }
// };
// class B :public A{};
// class C :public A{};

// class D : public B, public C{};

// int main(){
//     D obj;
//     obj.B::display();
// }

// Abstract Class
// cannot be instanstiated
// contains one pure virtual function
// class shape{
//     public:
//     virtual void show() = 0;
// };

// class circle : public shape{
//     public:
//      void show() override {
//         cout << "area" << endl;
//      }
// };

// int main(){
//     circle c;
//     c.show();
// }

// constructor in derived
class A{
    public:
    A(int x){
        cout << "Base class " << endl;
    }
};
class B : public A{
    public:
    B(int x,int y) : A(x){
        cout << "Derived class " << endl;
    }
};

int main(){
    B obj(1,2);
}



// sample question paper question

// class Employee{
//     private:
//     char employeename[10];
//     int employeeid;
//     int age;
//     char designation[10];
//     public:
//     virtual void showDesignation(){}
// };

// class Developer : public Employee{
//     public:
//     void showDesignation() override{
//         cout  << "Developer" << endl;
//     }
// };

// class Tester : public Employee{
//     public:
//     void showDesignation() override {
//         cout  << "Tester" << endl;
//     }
// };
// int main(){
//     Employee* obj = new Developer();
//     obj->showDesignation();
//     Employee* obj2 = new Tester();
//     obj2->showDesignation();
// }

// rough
// #include <list>
// int main(){
//     int array[5] = {3,1,2,4,5};
//     int array1[5] = {3,3,2,2,5};

//     vector<int> v(array, array+5);
//     list<int> l2(array1, array1+5);

//     // l.sort();
//     l.splice(2, l2);
//     // l.merge(l2);
//     // l2.unique();
//     // l.swap(l2);

//     for(auto i : l){
//         cout << i << " ";
//     }
//     cout << endl;
//     for(auto i : l2){
//         cout << i << " ";
//     }
// }

// int main(){
//     int a = 10;
//     int &ref = a;
//     cout << a << endl;
//     cout << ref << endl;
//     cout << &a << endl;
//     cout << &ref << endl;

// }
// void add(int &a, int &b){
//     a++;
//     b++;
// }
// int main(){
//     int a = 10;
//     int b = 11;
//     add(a,b);
//     cout << a << " " << b; 
// }

// int main(){
    // int a[] = {1, 2, 3,  4, 5};
    // int *p = a;
    // cout << *p << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // p++;
    // ++p;
    // cout << *p << endl;

// }

// class A{
//     private:
//     int a;
//     public:
//     A(int x){
//         a = x;
//     }
//     A(A &i){
//         a = i.a;
//     }
//     void display(){
//         int z = a;
//         cout << z << endl;
//     }
//     ~A(){
//         // delete;
//     }
// };

// int main(){
//     A obj(10);
//     obj.display();
//     A obj1(obj);
//     obj1.display();
// }