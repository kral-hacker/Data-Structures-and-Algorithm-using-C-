#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
            break;
        }
    }
    return 0;
}

int main(){
    int arr[10]={2,3,-56,667,8,9,24,55,3,89};
    int key;
    cout<<"Enter the value to be found in the array.";
    cin>>key;
    bool found = search(arr,10,key);
    cout<<found<<endl;

    if(found){
        cout<<"The elememt is present in the array.";
    }
    else{
        cout<<"Element is absent";
    }
}