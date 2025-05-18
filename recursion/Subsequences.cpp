#include <iostream>
#include <vector>
using namespace std;

void subse(int ind, vector<int> &ds, int arr[], int n, vector<vector<int>>&ans){
    if(ind == n){
        // for(auto it : ds){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        ans.push_back(ds);
        return;
    }
    ds.push_back(arr[ind]);
    subse(ind+1, ds, arr, n, ans);
    ds.pop_back();
    subse(ind+1, ds, arr, n, ans);
}
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> ds;
    vector<vector<int>>ans;
    subse(0, ds, arr, n, ans);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}