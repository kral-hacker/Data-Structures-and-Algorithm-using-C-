#include <iostream>
using namespace std;

bool isPossible(int arr[],int size, int n, int mid){

    int pageSum = 0;
    int student = 1;
    for(int i = 0;i<size;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            student++;
            if(student>n  || arr[i]>mid){
                return false;
            }pageSum=arr[i];
        }
    }
    return true;
}


int allocate(int arr[],int size, int n){
    int s = 0 ;
    int sum = 0;

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    int e = sum;
    int ans  = -1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,size,n,mid)){
            ans = mid;
            e= mid - 1; 
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[4]={10,20,30,40};
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    cout<<"Number of pages  are: "<<allocate(arr,4,n);
    
 
}