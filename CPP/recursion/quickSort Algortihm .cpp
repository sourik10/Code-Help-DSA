//quickSort Algorithm
//time = O(nlogn)
//space = O(1)

#include<iostream>
using namespace std;


int partition(vector<int>&ar,int s,int e){
    int pivot=ar[s]; //taking first element as pivot 
    int ct=0;
    for(int i=s+1;i<=e;i++){
        if(ar[i]<=pivot){
            ct++;
        }
    }
    //pivot index at correct position
    int pivotIndex=s+ct;
    swap(ar[pivotIndex],ar[s]);
    
    //upto this 
    //element present on left side are smaller than pivot
    //element present on right side are greater than pivot
    
    int i=s,j=e;
    while(i<pivotIndex and j>pivotIndex){
        while(ar[i]<=pivot){
            i++;
        }
        while(ar[j]>pivot){
            j--;
        }
        //swap needed 
        if(i<pivotIndex and j>pivotIndex){
            swap(ar[i++],ar[j--]);
        }
    }return pivotIndex;
}
void quickSort(vector<int>&ar,int s,int e){
    if(s>=e) return;
    
    int p=partition(ar,s,e);
    quickSort(ar,s,p-1);
    quickSort(ar,p+1,e);
}


int main() {

   /* int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;
    */
    vector<int>arr{2,4,1,6,9 ,9,9,9,9,9};
    quickSort(arr, 0, arr.size()-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}
