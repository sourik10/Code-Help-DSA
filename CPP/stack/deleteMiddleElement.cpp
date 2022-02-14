void deleteMiddle(stack<int>&s,int count,int size){
    //base case
    if(count==size/2){
       s.pop();
        return;
    }
  
    int t=s.top();
    s.pop();
    count++;
    solve(s,count,size); //recursive case
    s.push(t);
}
