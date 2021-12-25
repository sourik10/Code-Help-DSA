#include<bits/stdc++.h>
using namespace std;


int fastExpo(int a,int b){
	int res=1;

	if(b==0) {
		return a;
	}
	while(b>0){
		if(b%2){
			res=res*a;
		}
		b=b>>1;
		a=a*a;
	}
	return res;
}

int main(){

	int a,b;
	cin>>a>>b;
	cout<<fastExpo(a,b)<<endl;
}
