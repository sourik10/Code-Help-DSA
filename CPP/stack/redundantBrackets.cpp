#include<bits/stdc++.h> 
stack<char>st;
bool findRedundantBrackets(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                bool isDuplicate=true;
                while(st.top()!='('){
                    char top=st.top();
                   if(top=='+' || top=='-' || top=='/' || top=='*'){
                        isDuplicate = false;
                    }
                    st.pop();
                }
              
                if(isDuplicate==true){
                    return true;
                }
              
                //pop from outer loop 
                st.pop();
            }
        }
    }return false;
}
