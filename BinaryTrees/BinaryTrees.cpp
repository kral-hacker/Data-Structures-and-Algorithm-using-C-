#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* binaryTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"ENter the data for the left: "<<data<<endl;
    root->left = binaryTree(root->left);
    cout<<"Enter the data for the right: "<<data<<endl;
    root->right = binaryTree(root->right);
    return root;
}
void Inorder(Node* root){
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}




int main(){
    Node* root = NULL;
    root = binaryTree(root); 
    Inorder(root);
}