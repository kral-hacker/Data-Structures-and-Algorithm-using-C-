// using pair to check the balance of the tree
// complexity - O(n)
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
pair<bool,int> fastcheckBalance(Node* root){
   if(root==NULL){
    pair<bool,int> p = make_pair(true,0);
    return p;
   }

   pair<bool,int> left = fastcheckBalance(root->left);
   pair<bool,int> right = fastcheckBalance(root->right);

   bool leftans = left.first;
   bool rightans = right.first;
   bool diff = abs(left.second-right.second) <=1;

   pair<bool,int> ans;
   ans.second = max(left.second, right.second) + 1;
   if(leftans && rightans && diff){
         ans.first = true; 
   }
   else{
    ans.first = false;
   }

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
    cout<<"Tree balanced or not: "<<fastcheckBalance(root).first<<endl;

}