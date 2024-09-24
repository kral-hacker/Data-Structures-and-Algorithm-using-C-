# include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node (int data){    //constructor
        this->data = data;
        this->next = NULL;
    }
};

void insertatTail(int data, Node* &tail, Node* &head){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertatHead(int data,Node* &tail,Node* &head){
    Node* curr = new Node(data);
    curr->next = head;
    head = curr;
}
void insert_node_at_index(int data, int index, Node* &head, Node* &tail){
    Node* temp = head;
    int count  = 1;
    while(count < index-1){
        temp = temp->next;
        count++;
    }
    // creating a node for the data
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void print(Node* &head){
    Node* point = head;
    while(point != NULL){
        cout<<point->data<<endl;
        point = point->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements you want to enter in the list: ";
    cin>>n;
    cout<<"Start entering the data."<<endl;
    Node* head = NULL;
    Node* tail = NULL;
    for(int i = 0;i<n;i++){
        if(i==0){
            int data;
            cin>>data;
            Node* node = new Node(data);
            head = node;
            tail = node;    
        }
        else{
            int data;
            cin>>data;
            insertatTail(data,tail,head);
        }
    }
    print(head);
    insert_at_index(5,3,)
    
}