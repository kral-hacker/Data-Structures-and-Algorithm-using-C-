//Ananay Tyagi
//q5
#include "iostream"
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"<Enter the string: ";
    getline(cin, str);
    int l=str.length();
    for(int i=0;i<l;i++){

        if(str[i]==' '){
            cout<<"\n";
        }
        else{
            cout<<str[i];
        }

    }
}