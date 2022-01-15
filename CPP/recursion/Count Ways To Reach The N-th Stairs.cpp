//Count Ways To Reach The N-th Stairs
//https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    //base case
    if(n==0 || n==1){
        return n;
    }
    //recursive case
    return fib(n-1)+fib(n-2);
}

int countDistinctWayToClimbStair(long long nStairs)
{
   return fib(nStairs+1);
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;cin>>n;
		cout<<countDistinctWayToClimbStair(n)<<endl;

	}

	return 0;

}
