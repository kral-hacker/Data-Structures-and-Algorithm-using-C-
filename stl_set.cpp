#include <iostream>
using namespace std;
#include <set>

//Set contains no duplicate values
int main(){
    set <int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);



    for(int i: s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    for(int i: s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not : "<<s.count(5)<<endl;

    set <int>::iterator it = s.find(5);

    cout<<"Value of it (value of index where 5 is placed): "<<*it<<endl;
}