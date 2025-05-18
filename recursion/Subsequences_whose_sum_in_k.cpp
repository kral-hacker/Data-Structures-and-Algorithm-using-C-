#include <iostream>
#include <vector>
using namespace std;

void f(int i , vector<int>&ds , int arr[], int n, int sum, int k){
    if(i==n){
        if(sum==k){
            for(auto d: ds){
                cout<<d<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[i]);
    sum+=arr[i];
    f(i+1,ds,arr,n,sum,k);
    sum-=arr[i];
    ds.pop_back();

    f(i+1,ds,arr,n,sum,k);
}




int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int k = 2;
    vector<int> ds;
    f(0, ds, arr, n, 0, 2);
}