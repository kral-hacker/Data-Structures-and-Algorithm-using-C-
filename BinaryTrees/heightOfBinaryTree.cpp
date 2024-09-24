// longest path between the root node and the lead node
#include <iostream>
#include <queue>
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

Node* buildTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to the left of "<<root->data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to the right of "<<root->data<<endl;
    root->right = buildTree(root->right);

    return root;    
}
void levelOrderTraversel(Node* root){
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp != NULL){
            cout<<temp->data<<" ";
            q.push(temp->left);
            q.push(temp->right);
        }
    }
}
int heightBinaryTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = heightBinaryTree(root->left);
    int right = heightBinaryTree(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversel(root);
    cout<<"Height of the binary tree is: "<<heightBinaryTree(root)<<endl;
}