#include<bits/stdc++.h>
using namespace std;

void subset(string ans,int i,int n,string t){
  if(i==n){
    cout<<ans<<endl;
  }
  
  //ith element not included
  subset(ans,i+1,n,t);
  
  ans=ans+s[i];
  subset(ans,i+1,n,t);
  
}
int main(){
	string t="abc";
  subset(ans,0,t.length(),t);
  
}
