#include <iostream>
using namespace std;

swaparray(int arr[],int size){
    int start=0;
    int end=start+1;
    while(i<size){
        swap(arr[start],arr[end]);
        start++;
        start++;
        end++;
        end++;
        i++;
    }
}

printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    count<<endl;
}



int main(){
    int arr[6]={1,2,3,4,5,6};

    swaparray(arr,6);
    printattary(arr,6);
}