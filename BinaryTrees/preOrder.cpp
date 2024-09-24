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
Node* buildTree(Node* &root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(root->data == -1){
        return NULL;
    }
    cout<<"Enter the data for the left of "<<data<<" "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for the right of "<<data<<" "<<endl;
    root->right = buildTree(root->right);
    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main(){
    Node* root = NULL;
    root = buildTree(root);
    preOrder(root);
}