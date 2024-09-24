#include <iostream>
using namespace std;

 void duplicate(int arr[],int size){
    int ans;
    for(int i = 0; i<size ;i++){
        for(int j = 1;j<size;j++){
           ans=arr[i]^arr[j];
           if(ans==0){
            cout<<arr[i]<<" ";
           } 
        }
    }
}


int main(){
    int arr[8]={4,3,2,7,8,2,3,1};
    duplicate(arr,8);
}