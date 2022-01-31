/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    if(head==NULL or head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    int ct=0;
    
    while(curr!=NULL and ct<k){
        forward=curr->next;
        curr->next=prev;
        
  		prev=curr;
        curr=forward;
      	ct++;
    }
    
    if(forward!=NULL){
        head->next=kReverse(forward,k);
    }
    
    return prev;
    
}
