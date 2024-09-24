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
    //base case j
    if(root->data == -1){
        return NULL;
    }
    cout<<"Enter the data to the left of "<<data<<" ";
    root->left = buildTree(root->left);
    cout<<"Enter the data to the right of "<<data<<" ";
    root->right = buildTree(root->right);
}
void inOrderTraversel(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversel(root->left);
    cout<<root->data<<" ";
    inOrderTraversel(root->right);
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    inOrderTraversel(root);
}