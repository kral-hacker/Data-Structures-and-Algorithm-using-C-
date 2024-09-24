// Taking out the diameter of the tree using the pair'
// complexity = O(n)
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
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
pair<int,int> diameterfast(Node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterfast(root->left);
    pair<int,int> right = diameterfast(root->right);

    int opt1 = left.first;
    int opt2 = right.first;

    int opt3 = left.second + right.second + 1;

    pair<int,int> ans;
    ans.first = max(opt1, max(opt2,opt3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
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
    cout<<"The diameter of the tree is: "<<diameterfast(root).first<<endl;

}