void deleteMiddle(stack<int>&s,int ct=0,int size){
  
        //base case
        if(ct==size/2){
            s.pop();
            return;
        }
        int tp=s.top();
        s.pop();
  
        //recursive case
        deleteMiddle(s,ct+1,size); 

        //backtracking
        s.push(tp);
    }
