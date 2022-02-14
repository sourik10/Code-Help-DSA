bool isValidParenthesis(string e){
   stack<char>s;
    char ch;
    for(int i=0;i<e.length();i++){
        if(e[i]=='('|| e[i]=='{' || e[i]=='['){
            s.push(e[i]);
            continue;
        }
     
        
        if(s.empty()){
            return false;
        }
      
        switch(e[i]){
            
          case ')':
            ch= s.top();
            s.pop();
            if (ch == '{' || ch == '[')
                return false;
            break;
            
          case '}':
            ch= s.top();
            s.pop();
            if (ch == '(' || ch == '[')
                return false;
            break;
            
          case ']':
            ch= s.top();
            s.pop();
            if (ch == '(' || ch == '{')
                return false;
            break;
        }
    }
    return (s.empty()); //after push and pop operation (s) will empty for balanced parentheis
}
