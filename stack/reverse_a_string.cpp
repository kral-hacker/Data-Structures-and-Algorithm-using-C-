// Reversing a string using stack
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string name = "Ananay";
    stack <char> stack1;

    for(int i = 0;i<name.length();i++) {
        stack1.push(name[i]);
    }
    name = "";
    while(!stack1.empty()){
        char ch = stack1.top();
        name.push_back(ch);
        stack1.pop();
    }

    cout<<name;
}