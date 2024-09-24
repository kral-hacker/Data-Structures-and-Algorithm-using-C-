#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotindex = count+s;
    swap(arr[pivotindex],arr[s]);
    int i = s;
    int j = e; 
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}



int main(){
    int arr[6] = {12,11,13,5,6,7};
    quickSort(arr,0,5);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}