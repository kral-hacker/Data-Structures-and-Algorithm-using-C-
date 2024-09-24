// #include <iostream>
// #include <climits>
// using namespace std;
// void intersection(int arr1[],int size1,int arr2[],int size2){
//     for(int i = 0;i<size1;i++){
//             for(int j=0;j<size2;j++){
//                 if(arr1[i]==arr2[j]){
//                     arr2[j]=INT_MIN;
//                     cout<<arr1[i];
//                     break;
//                 }
//             }
//     }
// }



// int main(){
//     int arr1[4]={1,2,3,3};
//     int arr2[2]={3,4};
//     intersection(arr1,4,arr2,2);
// }


//The above question is exceeding time limit
//Optimised Solution

// #include <iostream>
// #include <climits>
// using namespace std;
// void intersection(int arr1[],int size1,int arr2[],int size2){
//     for(int i = 0;i<size1;i++){
//             for(int j=0;j<size2;j++){
//                 if(arr1[i]<arr2[j]){
//                     break;
//                 }
//                 if(arr1[i]==arr2[j]){
//                     arr2[j]=INT_MIN;
//                     cout<<arr1[i];
//                     break;
//                 }
//             }
//     }
// }



// int main(){
//     int arr1[4]={1,2,3,3};
//     int arr2[2]={3,4};
//     intersection(arr1,4,arr2,2);
// }


//most optimal solution
#include <iostream>
#include <climits>
using namespace std;

void intersection(int arr1[],int size1,int arr2[],int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]==arr2[j]){
                arr2[j]=INT_MIN;
                cout<<arr1[i]<<" ";
                i++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
    }
}


int main(){
    int arr1[6]={1,2,2,2,3,4};
    int arr2[4]={2,2,4,4};
    intersection(arr1,6,arr2,4);
}