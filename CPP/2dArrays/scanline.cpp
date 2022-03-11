#include<bits/stdc++.h>
using namespace std;

/*
Question - an array of n size is given . q no of query (left and right index and increased sum by x).
           print the final array after update 
           
approach - right index increased by x
            left index+1 decreased by x
           
           update prefix array and initial array
      answer final array 
*/

//time complexity = O(tescase t) + O(size of array n)
void scanlineAlgoritm(){
  
    int n; 
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int prefix[n+1];
    int t; cin>>t;
    while(t--){
        int l,r,x;
        cin>>l>>r>>x;
        prefix[l]+=x;
        prefix[r+1]-=x;
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=prefix[i];
        ar[i]+=s;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
