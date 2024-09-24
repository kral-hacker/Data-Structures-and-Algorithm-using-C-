#include <iostream>
using namespace std;
//swapping adjacent elements only


// void swaparray(int arr[],int size){
//     int start=0;
//     int end=start+1;
//     int i=0;
//     while(i<size){
//         swap(arr[start],arr[end]);
//         start++;
//         start++;
//         end++;
//         end++;
//         i++;
//     }
// }

// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }



// int main(){
//     int arr[6]={1,2,3,4,5,6};

//     swaparray(arr,6);
//     printarray(arr,6);
// }
// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

void swaparray(int arr[],int size){
    int start = 0;
    int end = start+1;
    int i = 0;
    while(i<size){
        swap(arr[start],arr[end]);
        start++;
        start++;
        end++;
        end++;
        i++;
    }
}
void printarray(int arr[],int size){
    for(int i = 0; i <size;i++){
        cout<<arr[i];
    }
}
int main() {
  int arr[6] = {1,2,3,4,5,6};
  swaparray(arr,6);
  printarray(arr,6);
}