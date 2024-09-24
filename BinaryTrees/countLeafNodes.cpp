// Creating the tree using binary order traversel
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderCreation(Node* &root){
    queue <Node*> q;
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the data to the left of "<<temp->data<<endl;
        int  left;
        cin>>left;
        if(left!=-1){
        temp->left = new Node(left);
        q.push(temp->left);
        }
        cout<<"Enter the data to the right of "<<temp->data<<endl;
        int  right;
        cin>>right;
        if(right!=-1){
        temp->right = new Node(right);
        q.push(temp->right);
        }
    }
}
void levelOrderTraversel(Node* root){
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
}
//Using inorder to count the no. of leaf nodes
void countLeafNodes(Node* root, int &count){
    if(root == NULL){
        return;
    }
    countLeafNodes(root->left,count);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    countLeafNodes(root->right,count);


}



int main(){
    Node* root = NULL;
    levelOrderCreation(root);
    int count = 0;
    countLeafNodes(root,count);
    cout<<"The number of leaf nodes are: "<<count;
    // levelOrderTraversel(root);
}