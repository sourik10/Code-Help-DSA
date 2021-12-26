#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int ar[][3],int key){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(ar[i][j]==key){
        return true;
      }
    }
  }
  return false;
}
    
int main(){
  
  int ar[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>ar[i][j];
    }
  }
  int n;
  cin>>n;
  cout<<linearSearch(ar,n)<<endl;

}
  
