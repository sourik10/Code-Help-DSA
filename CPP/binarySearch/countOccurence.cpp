int binarySearch(const vector<int>&A,int B){
    int s=0,e=A.size()-1;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(A[mid]==B) return mid;
        if(A[mid]>B) e=mid-1;
        else s=mid+1;
    }
    return -1;
}

int Solution::findCount(const vector<int> &A, int B) {
   int index=binarySearch(A,B);
   if(index==-1) return 0; //no matching element
   int ct=1;

   int left=index-1;  //left subarray check
   while(A[left]==B and left>=0){
       left--; ct++;
   }

   int right=index+1; //right subarray check
   while(A[right]==B and right<A.size()) {
       right++; ct++;
   }
   return ct;

}
