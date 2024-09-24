#include <iostream>
using namespace std;

int  duplicate(int arr[],int size){
    int ans=0;
    for(int i = 0;i<size;i++){
            ans=(ans^arr[i]);
    }
    for(int i=0;i<size-1;i++){
        ans=(ans^arr[i]);
    }
    return ans;
}

int main(){
    int arr[5]={4,2,1,3,1};
    cout<<"Duplicate number in the array is: "<<duplicate(arr,5);
}