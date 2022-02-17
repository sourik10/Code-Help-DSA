/*
   Algorithm: 

Declare a character stack S.
Now traverse the expression string exp. 
If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else brackets are not balanced.
              
              
    */

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
