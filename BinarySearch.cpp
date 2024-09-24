// Binary search is always applied on monotoning functions
// Monotoning functions are the functions which are either increasing or decreasing
//Time complexity of Binary search is O(log n)
#include <iostream>
using namespace std;


int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<size){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid + 1;
            end = size - 1;
             mid = (start+end)/2;
        }
        if(arr[mid]>key){
            start = 0;
            end = mid - 1;
             mid = (start+end)/2;
        }
    
    }
    return -1;
}

int main(){
    int arr[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int key;
    cout<<"Enter the value to be found"<<endl;
    cin>>key;
    int index = binarysearch(odd,5,key);
    cout<<"Our key is placed on the index "<<index;
}