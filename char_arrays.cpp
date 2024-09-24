#include <iostream>
using namespace std;

int getlength(char name[]){
    int count  = 0;
    for(int i = 0;name[i] != '\0';i++){

        count ++;
    }
    return count;
}

void reverse(char name[],int size){
    int i = 0;
    int j = size - 1;
        while(i<=j){
            swap(name[i++],name[j--]);
        }
}


char tolowercase(char ch){
    if(ch >= 'a' and ch<= 'z'){
        return ch;
    }
    else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}

bool ispalindrome(char name[],int size){
    int i = 0;
    int j = size - 1;
    while(i<=j){
        char a = name[i];
        char b = name[j];
        if(tolowercase(a)!=tolowercase(b)){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char name[20] ;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    // name[2] = '\0';
    cout<<"Your name is : "<<name<<endl;
    int size = getlength(name);
    cout<<"Length if our char array is: "<<size<<endl;
    reverse(name,size);
    cout<<"Reversed name is "<<name<<endl;
    if(ispalindrome(name,size)){
        cout<<"Our string is palindrome. "<<endl;
    }
    else{
        cout<<"Our name is not palindrome. "<<endl;
    }

    cout << "Upper case : "<<tolowercase('A')<<endl;
    cout << "Lower caase: "<<tolowercase('a')<<endl;
}