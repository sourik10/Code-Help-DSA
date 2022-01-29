//approach 1--- using length of a list
//time O(n) 
int getLength(Node* &head){
    if(head==NULL){
        return 0;
    }
    Node* temp=head;
    int ct=0;
    while(temp!=NULL){
        temp=temp->next;
        ct++;
    }
    return ct;
}

Node *findMiddle(Node *head) {
    int ans=getLength(head);
    ans=ans/2;
    Node* temp=head;
    while(ans--){
        temp=temp->next;
    }
    return temp;
}


//appraoch 2 - using two pointer approach(fast,slow)
Node *findMiddle(Node *head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
