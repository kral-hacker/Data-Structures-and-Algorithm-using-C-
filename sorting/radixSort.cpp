#include <iostream>
#include <climits>
using namespace std;
void countSort(int arr[],int pos,int size){
    int freq[10] = {0};
    for(int i = 0;i<size;i++){
        freq[(arr[i]/pos)%10]++;
    }
    for(int i =1;i<10;i++){
        freq[i] = freq[i-1]+freq[i];
    }

    int ansarray[size+1];
    for(int i = size-1;i>=0;i--){
        ansarray[--freq[(arr[i]/pos)%10]] = arr[i];
    }

    for(int i = 0;i<size;i++){
        arr[i] = ansarray[i];
    }
}

void radixSort(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int pos = 1;max/pos>0;pos=pos*10){
        countSort(arr,pos,size);
    }
}



int main(){
    int arr[5] = {91,128,34,46,59};
    radixSort(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}