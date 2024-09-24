#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[10]={12,23,34,45,56,56,67,90,9,90};
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else{   
            max=max;
        }
    }
        for(int i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else{
            min=min;
        }
    }
    cout<<"Maximum element of the array is: "<<max<<endl;
    cout<<"Minimum element of the array is: "<<min<<endl;
}