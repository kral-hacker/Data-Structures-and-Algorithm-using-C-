#include <iostream>
using namespace std;
#include <vector>

bool check(vector <int> &v){
    int n = v.size();
    int count = 0;
    for(int i = 1;i<n;i++){
        if(v[i-1]>v[i]){
            count++;
        }
    }
    if(v[n-1]>v[0]){
        count++;
    }
    return count<=1;
}


int main(){

vector <int> v;
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(1);
v.push_back(2);

if(check(v)){
    cout<<"Our array is sorted and rotated "<<endl;
}
else{
    cout<<"Our array is not sorted and rotated."<<endl;
}

}