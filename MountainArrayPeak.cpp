#include <iostream>
using namespace std;

int peakelement(int arr[],int size){
    int s=0 ;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main(){
    int arr[4]={3,4,5,1};
    cout<<"Peak element is present at the index: "<<peakelement(arr,4)<<endl;
}