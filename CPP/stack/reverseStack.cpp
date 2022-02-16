/*
approach - 1.put aside stack top 
           2.reverse using rescursion 
           3.insertStackTop at bottom
  */

void insertBottom(stack<int>&myStack,int x){
    if(myStack.empty()){
        myStack.push(x);
        	return;
    }
    
    int top=myStack.top();
    myStack.pop();
    insertBottom(myStack,x);
    myStack.push(top);
    
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int t=stack.top();
    stack.pop();
    reverseStack(stack);
    insertBottom(stack,t);
}
