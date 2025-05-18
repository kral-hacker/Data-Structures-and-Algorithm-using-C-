#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int , int> m;
    m[2] = 1;
    m[2]++;
    m[3] = 3;

    cout << (m.find(2) == m.end()) << endl;

    // for(unordered_map<int , int> :: iterator it = m.begin() ; it != m.end() ; it++){
    //     cout << it->first << " " << it->second <<endl;
    // }
    

    for(auto i : m){
        cout << i.first << " " << i.second <<endl;
    }
    return 0;
}
// void f(int i, i


// int main(){
//     cout << (1 and 1 and 2);
//     return 0;
// }

// void f(int n){
//     if(n == 0) return;
//     f(n/2);
//     cout<<n%2;
// }

// int main(){
//     f(2);
// }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
// void print();
// int main(){
//     int a = 10;
//     int &ref = a;
//     cout<<ref<<endl;
//     cout<<&ref<<endl;
//     cout<<&a<<endl;
//     ref =  7;
//     // cout << ref <<end;
//     cout<<a<<endl;
//     print();
// }

// void print(){
//     cout<<"2 is even"<<endl;
// }
// void add(int *x){
//     *x = *x + 10;
// }

// int main(){
//     int a = 10;
//     int b = 3;
//     int *p = &a;
//     int *q = p;
//     int *r = &b;
//     // cin>>3;
//     cout<<a<<b<<endl;
//     cout<<*p<<*q<<*r<<endl;
//     add(&a);
//     cout<<a<<endl;
// }

// int main(){
//     int a[] = {1,2,3,4,5};
//     int *p = a;
//     cout<<*p<<endl;
//     p++;
//     ++p;
//     cout<<*p<<endl;
//     cout<<p<<endl;
// }


// dynamic memory allocation
// int main(){
//     try{
//         throw &"error";
//     }
//     catch(const char** excp){
//         cout<<"Error";
//     }
//     catch(...){
//         cout<<"Default Exception";
//     }
// }

// int main(){
//     unordered_map<char, bool> m;
//     m['a'] = true;
//     m['e'] = true;
//     cout<<m.size()<<endl;
// }