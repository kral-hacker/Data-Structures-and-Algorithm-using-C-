#include <iostream>
using namespace std;
// 3 1 -1 -1 2 -1 -1
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

    cout<<"Enter the data to the left of "<<root->data<<" "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to the right of "<<root->data<<" "<<endl;
    root->right = buildTree(root->right);
}
pair<bool,int> sumTree(Node* root){
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    if(root->left == NULL && root->right == NULL){
        pair<bool,int> p = make_pair(true, root->data);
        return p;
}

    pair<bool,int> left = sumTree(root->left) ;
    pair<bool,int> right = sumTree(root->right);

    bool curr = left.second + right.second == root->data;

    pair<bool,int> ans;
    if(left.first && right.first && curr){
        ans.first = true;
        ans.second = 2*root->data;
    }
    else{
        ans.first = false;
    }

    return ans;
}
void preOrder(Node* root){
    if(root == NULL){
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
    cout<<"Is our tree is sum tree or not: "<<sumTree(root).first<<endl;
}