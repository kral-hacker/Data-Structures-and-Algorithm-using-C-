/*

Node* prev = first;
Node* point1 = first->next;
Node* point2 = second;

while(point2 != NULL){
    if(prev->data <= point2->data <= point1->data){
        prev->next = point2;
        point2->next = point1;
        point2 = point2->next;
    }
    else{
        prev = prev->next;
        point1 = point1 -> next;
    }
}












*/