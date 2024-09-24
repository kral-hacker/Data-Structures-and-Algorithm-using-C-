#include <iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int mainarrIndex = s;
    for(int i = 0;i<len1;i++){
        arr1[i] = arr[mainarrIndex++];
    }
    mainarrIndex = mid+1;
    for(int i = 0;i<len2;i++){
        arr2[i] = arr[mainarrIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainarrIndex = s;
    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[mainarrIndex++] = arr1[index1++];
        }
        if(arr1[index1]>arr2[index2]){
            arr[mainarrIndex++] = arr2[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrIndex++] = arr1[index1++];
    }
    while(index2<len2){
        arr[mainarrIndex++] = arr2[index2++];
    }
}
void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}




int main(){
    int arr[6] = {23,45,1,8,4,9};
    mergeSort(arr,0,5);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}