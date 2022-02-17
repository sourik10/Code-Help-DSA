//approach 

void solve(stack<int>&st,int ct,int N){
    
    //base case upto size / 2 
    if(ct==N/2){
        st.pop();
        return;
    }
    int t=st.top();
    st.pop();
    
    //recrusive traverse from stack top to size / 2 
    solve(st,ct+1,N);
    st.push(t);
}
void deleteMiddle(stack<int>&inputStack, int N){
    int ct=0;
    solve(inputStack,ct,N);
}
