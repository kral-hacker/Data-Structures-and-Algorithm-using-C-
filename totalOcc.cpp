//Total number of occurence equal to (last-first)+1
#include <iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]== key){
                ans=mid;
                e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid + 1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]== key){
                ans=mid;
                s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid + 1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}



int main(){
    int arr[5]={1,2,3,3,5};
    int a=firstOccurence(arr,5,3);
    int b=lastOccurence(arr,5,3);
    cout<<"first Occurence "<<firstOccurence(arr,5,3)<<endl;
    cout<<"Last Ocurence "<<lastOccurence(arr,5,3)<<endl;
    cout<<"Total number of occiurences "<<(b-a)+1;
}