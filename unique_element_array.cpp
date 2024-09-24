#include <iostream>
using namespace std;

void unique(int arr[],int size){
    int ans=0;
    for(int i = 0;i<size;i++){
        ans=ans^arr[i];
        cout<<ans<<endl;
    }
    cout<<"Unique element in the given array is: "<<ans;
}

int main(){
    int arr[7]={3,2,1,3,2,4,4};
    unique(arr,7);

}