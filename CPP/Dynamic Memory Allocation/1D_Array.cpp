#include<bits/stdc++.h>
using namespace std;
int getSum(int* ar,int n){

	int sum=0;
	for(int i=0;i<n;i++){
		sum+=ar[i];
	}
	return sum;
}


int main(){
	int n;
	cin>>n;
	
	//variable size array using DMA  1D ARRAY
	int*  ar=new int[n];

	//taking input in variable sized array
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	cout<<getSum(ar,n)<<endl;



}
