//iterative solution
//time complexity O(n),n = number of nodes

Node* reverseList(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;

        prev=curr;
        curr=forward;
    }
    return prev;
}

//recursive method 
//time complexity o(n), n = number of nodes
Node* reverseRecursive(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }

   Node* rest=reverseRecursive(head->next);
   head->next->next=head;
   head->next=NULL;

    return rest;

}
