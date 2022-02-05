//approach 1--using flag variable
//time O(n), space O(1)

bool detectLoop(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->flag==1){
            return false; 
        }
        temp->flag=1;
        temp=temp->next;
    }
    return true;
}

//approach 2---using unorderedSet
//time O(n),space O(n)

bool detectLoop(Node* head){
    Node* temp=head;
    unordered_set<Node*>s;
    while(temp!=NULL){
        if(s.find(temp)!=s.end()){
          //(s.find(temp)==true)
            return true;
        }
        s.insert(temp);
        temp=temp->next;

    }
    return false;
}



//approach 3 ---Floyd’s Cycle-Finding Algorithm (two pointer)
//time O(n) , space O(n)

bool detectLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}
  
