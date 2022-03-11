#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void prefix2d(){
    int n,m;
    cin>>n>>m;

    //taking input in 2d array
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }

    //creating preix2d array
    int pf[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pf[i][j]=ar[i][j];
            if(i-1>=0) pf[i][j] += pf[i-1][j];
            if(j-1>=0) pf[i][j] += pf[i][j-1];
            if(i-1>=0 && j-1>=0) pf[i][j] -= pf[i-1][j-1];
        }
    }

    int a,b,c,d;
    cin>>a>>b>>c>>d; //two coordinate M1(a,b) and M2(c,d)
    cout<<pf[c][d]-pf[c][b-1]-pf[a-1][d]+pf[a-1][b-1]; //answer 


}

--------------------------------------------------
/* 
Prefix Sum in 2D ARRAY
Given a two-dimensional array of size (N).
Cartesian coordinate are given P(a,b) and Q(c,d).Find the sum of elements b/w P and Q.
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int ar[N][N];
long long int pf[N][N];


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            cin>>ar[i][j]; 
             pf[i][j]= ar[i][j] + pf[i-1][j]+ pf[i][j-1] - pf[i-1][j-1];
    }
}


    int t;
    cin>>t;
    while(t--){

        //co-ordinate for point P(a,b)
        int a,b;
        cin>>a>>b;

        //co-ordinate for point Q(c,d)
        int c,d;
        cin>>c>>d;

        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;

    }


}
