// Diameter  - Max distance between any 2 nodes of the tree
// complecity - O(n2)
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

        if(temp->data!=-1){
            cout<<"Enter the data to the left of: "<<temp->data<<endl;
            int left;
            cin>>left;
            if(left!=-1){
            temp->left = new Node(left);
            q.push(temp->left);
            }
            cout<<"Enter the data to the right of: "<<temp->data<<endl;
            int right;
            cin>>right;
            if(right!=-1){
            temp->right = new Node(right);
            q.push(temp->right);
            }
        }
    }
}
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);

    int opt3 = height(root->left) + height(root->right) + 1;

    int ans = max(opt1, max(opt2,opt3));
}



int main(){
    Node* root = NULL;
    levelOrderCreation(root);
    int diameter1 = diameter(root);
    cout<<"diameter: "<<diameter1;
}