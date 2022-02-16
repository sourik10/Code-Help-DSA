void solve(stack<int>&myStack,int x){
    if(myStack.empty()){
        myStack.push(x);
        	return;
    }
    
    int top=myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(top);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack,x);
    return myStack;
}
