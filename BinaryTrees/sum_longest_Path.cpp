#include <iostream>
#include <queue>
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

pair<int,int> sum(Node* root, pair<int,int> temp){
    pair<int,int> ans = make_pair(0,0);
    if(root==NULL){
        return make_pair(0,0);
    }
    if(root->left == NULL && root->right==NULL){
        return make_pair(root->data,1);
    }
    temp.first += root->data;
    temp.second++;

    sum(root->left,temp);
    sum(root->right,temp);


    return ans;
}
void levelOrderTraversel(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp!=NULL){
            cout<<temp->data<<" ";
            q.push(temp->left);
            q.push(temp->right);
        }
    }
}


int main(){
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversel(root);
    pair<int,int> temp = make_pair(0,0);
    cout<<"The sum along the longest path is : "<<sum(root,temp).first<<" and the longest length is : "<<sum(root,temp).second<<" ";
}