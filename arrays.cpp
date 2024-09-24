#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int arr1[5]={0};
    int size = sizeof(arr1)/sizeof(int);
    printarray(arr1,size);


    char ch[5]={'a','b','v','c','d'};

    string array2[2]={"Ananay","Tyagi"};
    for(int i=0;i<2;i++){
        cout<<array2[i]<<" "<<endl;
    }
}