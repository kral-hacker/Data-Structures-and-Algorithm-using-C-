#include <iostream>
using namespace std;
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
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
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(root->data == -1){
        return NULL;
    }

    cout<<"Enter the data to the left of "<<root->data<<" ";
    root->left = buildTree(root->left);
    cout<<"Enter the data to the right of "<<root->data<<" ";
    root->right = buildTree(root->right);
}

void postOrderTraversel(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversel(root->left);
    postOrderTraversel(root->right);
    cout<<root->data<<" ";
}




int main(){
    Node* root = NULL;
    root = buildTree(root);
    postOrderTraversel(root);
}