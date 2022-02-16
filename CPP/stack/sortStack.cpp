//time complexity 
//space complexity O(1)

void solve(stack<int>&s,int n){
    //descending order 
    if(s.empty() || !s.empty() && s.top()<n){
        s.push(n);
        return;
    }
    
    //find the correct position of n
    int num=s.top();
    s.pop();
    solve(s,n);
  
    //push top(num) in corrected position
    s.push(num);
}
void sortStack(stack<int> &s){
	if(s.empty()){
        return;
    }
    int t=s.top();
    s.pop();
    sortStack(s);
    
  //sort is descending order
    solve(s,t);
}

