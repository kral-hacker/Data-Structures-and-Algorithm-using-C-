#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> ans;

    while(left <= mid && right<= high){
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    
    while(right<=high){
        ans.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = ans[i - low];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return ;
    }
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid , high);
}




int main(){
    int arr[] = {3,1,2,4,1,5,2,6,4};
    mergeSort(arr, 0, 8);

    for(auto it: arr){
        cout<<it<<" ";
    }
}