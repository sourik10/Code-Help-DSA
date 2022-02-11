#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    
    string q="ronaldo";
    stack<char>s;
    for(int i=0;i<q.length();i++){
        s.push(q[i]);
    }

    while(!s.empty()){
        cout<<s.top()<<",";
        s.pop();
    }

}
