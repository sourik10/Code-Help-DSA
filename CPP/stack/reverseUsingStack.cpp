#include<bits/stdc++.h>
using namespace std;

int main(){

    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    

   string str; cin>>str;
   stack<char>ch;
   for(int i=0;i<str.length();i++){
       ch.push(str[i]);
   }
    while(!ch.empty()){
        cout<<ch.top()<<" ";
        ch.pop();
    }
}
