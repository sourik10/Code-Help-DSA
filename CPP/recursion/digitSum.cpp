#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
const int N=1e5+10;
long long int ar[N];
void inOutput(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int digitSum(int n){
	if(n==0){
		return 0;
	}
	return (n%10 + digitSum(n/10));
}
int main(){
	fastread();
	//inOutput();

	int n; cin>>n;
	cout<<digitSum(n);
}
