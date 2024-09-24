#include <iostream>
using namespace std;
#include <stack>

int main(){
    stack <string> st;
    st.push("Ananay");
    st.push("Tyagi");
    st.push("kral");

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<"Size: "<<st.size()<<endl;
    cout<<"Empty or not: "<<st.empty()<<endl;
    

}