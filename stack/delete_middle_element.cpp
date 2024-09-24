// deleting  the middle element from the stack
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int mid = st.size()/2;
    int count = 0;
    stack<int> st2;
    while(true){
        if(count == mid){
            cout<<"The middle element is : "<<st.top()<<endl;
            st.pop();
            break;
        }
        else{
            int a = st.top();
            st2.push(a);
            st.pop();
            count++;
        }
    }
    while(!st2.empty()){
        st.push(st2.top());
        st2.pop();
    }
    cout<<"Updated stack is: ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}