//Approach fiinding the nth largests element of the array and placing them at back
#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i = 1; i<n ; i++){
        bool swapped = false;
        for(int j = 0;j< n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false )   //Optimizing the code //If array is already sorted
        break;
    }
}



int main(){
    int arr[6] = {10,1,7,6,14,9};
    bubblesort(arr,6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}