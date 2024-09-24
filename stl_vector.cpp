#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Size: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

      v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

      v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at index 2: "<<v.at(2)<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    for( int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Initializing vector by size"<<endl;
    vector<int>  a(5,1);
    cout<<"print a"<<endl;

    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    //copying a in new vector
    vector <int> last(a);

}