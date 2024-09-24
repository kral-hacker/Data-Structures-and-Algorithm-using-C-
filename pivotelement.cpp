#include <iostream>
using namespace std;

int pivotelement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[mid+1]){
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
    int arr[5]={7,9,1,2,3};
    cout<<"Pivot element of our array is at the index : "<<pivotelement(arr,5);
}