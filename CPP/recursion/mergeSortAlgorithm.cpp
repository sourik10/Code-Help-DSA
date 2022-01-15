//mergeSort algorithm 
//time complexity O(nlogn)
//extra space O(n) for creating temp array of n size

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &array,int s,int e){

	int m = (s+e)/2;
    int i = s;
    int j = m + 1;

    vector<int> temp; //temp vector created 


    while(i<=m and j<=e){
        if(array[i] < array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else{
            temp.push_back(array[j]);
            j++;
        }
    }

    
    //copy rem elements from first array
    while(i<=m){
        temp.push_back(array[i++]);
    }

    
    // or copy rem elements from second array
    while(j<=e){
        temp.push_back(array[j++]);
    }

    
    //copy back the elements from temp to original array
    int k = 0 ;
    for(int idx = s; idx <=e ;idx++){
        array[idx] = temp[k++];
    }
    //return;
}

void mergesort(vector<int> &arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    

    int mid = (s+e)/2;
    mergesort(arr,s,mid); 	//right subarray
    mergesort(arr,mid+1,e); //left subarray

     merge(arr,s,e); //merge on two subarrays
}

int main(){
    
    vector<int> arr{10,5,2,0,7,6,4};

    int s = 0;
    int e = arr.size()-1;


    mergesort(arr,s,e);

    for(int x : arr){
        cout<< x <<",";
    }
    cout<<endl;
    return 0;
}
