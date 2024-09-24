//Pre order
//In order
//Post order


#include <iostream>
using namespace std;
template <typename T>
struct TreeNode{
    T data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(T value): data(value),left(nullptr),right(nullptr){}
};
template <typename T>
TreeNode<T>* insert(TreeNode<T>* root,T value){
    if(root==nullptr){
        return new TreeNode<T>(value);
    }
    if(value<root->data){
        root->left=insert(root->left,value);
    }
    else if(value>root->data){
        root->right = insert(root->right,value);
    }
}
template <typename T>
void inorderTraversel(TreeNode<T>* root){
    if(root!=nullptr){
        inorderTraversel(root->left);
        cout<<root->data<<" ";
        inorderTraversel(root->right);
    }
}
int main(){
    TreeNode<int>* root = nullptr;
    cout<<"Enter the number of the node in the Tree: ";
    int n;
    cin>>n;
    cout<<"Enter the values of the node: "<<endl;
    for(int i = 0 ;i<n;i++){
        int a;
        cin>>a;
        if(i==0){
            root = insert(root,a);
        }
        else{
            insert(root,a);
        }
    }
    cout<<"Inorder Traversel of the Binary Tree is: ";
    inorderTraversel(root);
}