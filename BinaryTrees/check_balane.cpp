// A tree is called to be balance if every node left subtree - rightsubtree <=-1
// complexity = O(n2)
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

Node*  buildTree(Node* &root){
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

    return root;
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right)+1;

    return ans;
}
bool checkBalance(Node* root){
    if(root == NULL){
        return true;
    }
    bool left = checkBalance(root->left);
    bool right = checkBalance(root->right);

    bool diff = abs(height(root->left)-height(root->right)) <= 1;
    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    preOrder(root);
    cout<<endl;
    cout<<"The height of the tree is: "<<height(root)<<endl;
    cout<<"Tree balanced or not: "<<checkBalance(root)<<endl;

}