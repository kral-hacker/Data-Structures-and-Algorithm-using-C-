#include "iostream"
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    int sum=0;
    int i=0;
    while(i<=num){
        sum+=i;
        i++;
    }
    cout<<"Sum of the first "<<num<<"numbers is : "<<sum;
}