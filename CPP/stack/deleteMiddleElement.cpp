void solve(stack<int>&st,int ct,int N){
    if(ct==N/2){
        st.pop();
        return;
    }
    int t=st.top();
    st.pop();
    solve(st,ct+1,N);
    st.push(t);
}
void deleteMiddle(stack<int>&inputStack, int N){
    int ct=0;
    solve(inputStack,ct,N);
}
