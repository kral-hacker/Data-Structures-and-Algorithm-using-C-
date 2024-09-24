// Learning to create a binary tree
#include <iostream>
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

int main(){
    Node* root = NULL;
    root = buildTree(root);
}