#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string paren = "{[()]}";
    stack <char> st;
    for(int i = 0;i<paren.length();i++){
        if(paren[i]=='{' || paren[i]=='[' || paren[i] == '(' ){
            st.push(paren[i]);
        }
        else if(paren[i]!=st.top()){
            cout<<"The given string is not a valid parenthesis.";
            break;
        }
        else{
            st.pop();
        }
    }
}
