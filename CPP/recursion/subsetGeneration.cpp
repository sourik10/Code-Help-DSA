#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>allsubsets;

void generateSubset(vector<int>&subset,int i,vector<int>&nums){

	if(i==nums.size()){
		allsubsets.push_back(subset);
		return;
	}


	//ith element not included
	generateSubset(subset,i+1,nums); 

	//ith element included
	subset.push_back(nums[i]);
	generateSubset(subset,i+1,nums);
	subset.pop_back();

}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
    	cin>>nums[i];
    }
    vector<int>empty;
    generateSubset(empty,0,nums);

    for(auto x:allsubsets){
    	for(auto y:x){
    		cout<<y<<" ";
    	}
    	cout<<endl;
    }

}
