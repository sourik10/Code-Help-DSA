#include<bits/stdc++.h>
using namespace std;

int getSum(int* ar,int n){
	cout<<"Size of array "<<sizeof(ar)<<endl;
	int s=0;
	for(int i=0;i<n;i++){
		s+=ar[i];
	}
	return s;
}

void Update(int* p){
  //p=p+1; //adrressing passing 
	*p =*p +1;
}

int main(){
	int ar[10]={1,2,3,4,5};
	cout<<getSum(ar,5)<<endl;
	int x=10;
	int *y=&x;

	cout<<"Before Update: "<<*y<<endl;
	Update(y);
	cout<<"Update: "<<*y<<endl;
}
