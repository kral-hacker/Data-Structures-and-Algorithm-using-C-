#include <iostream>
using namespace std;
#include <vector>

void reverse(vector <int> &v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}

add(vector <int> &a,int n,vector <int> &b, int m){
    vector <int> ans;
    int i = n-1;
    int j = m-1;
    int carry = 0;
    int rem = 0;
    while(i>=0 and j>=0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        rem = sum%10;
        ans.push_back(rem);
        i--;
        j--;
    }
    //1st case
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    //2nd case
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    

    reverse(ans);
    for(auto i : ans){
        cout<<i<<" ";
    }
}


int main(){
    vector <int> a;
    vector <int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    b.push_back(6);


    add(a,a.size(),b,b.size());
}