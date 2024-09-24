#include <iostream>
using namespace std;

void movezeroes(int arr[], int size){
    int i = 0;
    for(int j = 0;j<size; j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}








int main(){
    int arr[7] = {0,1,0,3,12,0,0};
    movezeroes(arr,7);
    cout<<"Array after moving zeores: "<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
}