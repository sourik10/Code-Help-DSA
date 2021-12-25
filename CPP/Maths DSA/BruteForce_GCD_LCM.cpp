#include<bits/stdc++.h>
using namespace std;

//brute force approach
int gcd(int a,int b){
	if(a==0){
		return b;
	}
	if(b==0){
		return a;
	}
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else b=b-a;
	}
	return a;
}

int main(){

	int a,b;
	cin>>a>>b;
	cout<<"GCD "<<gcd(a,b)<<endl;
	cout<<"LCM "<<a*b/gcd(a,b)<<endl;
}
