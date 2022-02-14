void solve(stack<int> &s,int x){
    
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int t=s.top();
    s.pop();
    solve(s,x); //recurisve case
    
    //backtracking
    s.push(t);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack,x);
    return myStack;
}
