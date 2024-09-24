#include <iostream>
using namespace std;
int main(){
    //1st way of initializing
    // int arr[3][4];

    // for(int i = 0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i = 0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
//2nd way of initialixing
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
      
      for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
//3rd way of intializing
    int arr2[3][3] = {{1,11,111},{2,22,222},{3,33,333}};
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


}