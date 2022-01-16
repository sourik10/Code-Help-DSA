//Binary Search
//https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=3&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11
//time cpmplexity O(log n)
//space complexity (log n)

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int ar[],int l,int h,int x){
	
	while(l<=h){
		int mid=l+(h-l)/2;

		//base case
		if(ar[mid]==x){
			return mid;
		}
    
    //leftSub array
		if(ar[mid]>x){
			return binarySearch(ar,l,mid-1,x);
		}
    
    //right Subarray
		return binarySearch(ar,mid+1,h,x);
	}
	
	//element not found 
	return -1;
}
int main(){
	int n;
	cin>>n;
	int ar[100];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	
	int find; cin>>find;
	cout<<binarySearch(ar,0,n-1,find);
	return 0;

}
