//pair sum of an array of a paricular number
#include <iostream>
using namespace std;

void pairsum(int arr[],int size,int n){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==n){
                cout<<arr[i]<<" "<<arr[j];
            }
        }
        cout<<endl;

    }
}


int main(){
    int arr[5] = {1,2,3,4,5};
    int n;
    cin>>n;
    pairsum(arr,5,n);
}