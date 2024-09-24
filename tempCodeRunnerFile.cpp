#include <iostream>
// 4 2 7 -1 -1 1 6 -1 -1 -1 5 2 -1 -1 3 -1 -1
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
    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data to the left of "<<data<<" "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to the right of "<<data<<" "<<endl;
    root->right = buildTree(root->right);
}


int main(){
    Node* root = NULL;
    root = buildTree(root);

}