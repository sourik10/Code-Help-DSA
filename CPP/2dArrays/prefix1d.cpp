#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
void inOutput(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    fastread();
  //  inOutput();

     int ar[100];
        int n; cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
       int pf[n+1];
       for(int i=0;i<n;i++){
           if(i==0) pf[i]=ar[i];
           else{
               pf[i]=pf[i-1]+ar[i];
           }
       }
       int q; cin>>q;
       while(q--){         //time complexity O(q)+ O(n)
           int l,r;
           cin>>l>>r;
           int sum=0;
           sum+=pf[r];
           if(l>=1){
               sum-=pf[l-1];
           }
           cout<<sum<<endl;
       }

}



/* input
3
1 4 1
3
1 1
1 2
0 2
*/
--------------------------------------------------------------------------------------------------------
/* 
Prefix Sum in 1D ARRAY----1 based indexing
Given a one-dimensional array of size (N).Left and right index are given .find the sum of elements between L and R.
*/

#include<bits/stdc++.h>
using namespace std;


//gloabally declared array
const int N=1e5+9;
int a[N];
int pf[N];


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i]; 

        pf[i]=pf[i-1]+a[i]; 
    }

    int t;
    cin>>t;
    while(t--){

        int l,r;
        cin>>l>>r;

        cout<<pf[r]-pf[l-1]<<endl;

    }


}
