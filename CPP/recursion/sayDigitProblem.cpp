#include<bits/stdc++.h>
using namespace std;

void sayDigits(int n,string arr[]){
	//base case
	if(n==0) return ;


	//recursive case
	int digit=n%10;
	n/=10;
	sayDigits(n,arr);
	cout<<arr[digit]<<" ";

}
int main(){
	int n;
	cin>>n;

	string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	sayDigits(n,a);

	return 0;

}
