#include <iostream>
#include <vector>
#include <queue>
// 1 2 3 -1 -1 4 5 -1 -1 -1 -1
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void buildTree(Node* &root){
    queue<Node*> q;
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the data to the left of "<<temp->data<<" "<<endl;
        int left;
        cin>>left;
        if(left!=-1){
            temp->left = new Node(left);
            q.push(temp->left);
        }
        cout<<"Enter the data to the right of "<<temp->data<<" "<<endl;
        int right;
        cin>>right;
        if(right!=-1){
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }
}
void levelOrderTraversel(Node* root){
    queue<Node*> q;
    q.push(root);


    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp!=NULL){
            cout<<temp->data<<" ";
            q.push(temp->left);
            q.push(temp->right);
        }

    }
}
void zigzagTraversel(Node* root){
    queue<Node*> q;
    vector<vector<int>> result;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i = 0;i<size;i++){
            Node* temp = q.front();
            q.pop();

            int index = leftToRight ? i : size-i-1;
            ans[index] = temp->data;

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
        
            leftToRight = !leftToRight;
            result.push_back(ans);
    }

    for(auto level: result){
        for(auto i: level){
        cout<<i<<" ";
        }
    }
}

int main(){
    Node* root = NULL;
    buildTree(root);
    cout<<"Level Order Traversel: "<<endl;
    levelOrderTraversel(root);
    cout<<"Zig Zag Traversel: "<<endl;
    zigzagTraversel(root);
}