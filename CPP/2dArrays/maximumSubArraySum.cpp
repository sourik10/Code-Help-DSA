int maximumSumSubarray(int k, vector<int> &arr , int n){  // k size of subarray, n size of array
        if(k>n){
            return -1;
        }
        int currsum=0;
        for(int i=0;i<k;i++){
            currsum+=arr[i];
        }
        
          int maxsum=currsum;
          for(int i=k;i<n;i++){
              currsum+=(arr[i]-arr[i-k]);
              maxsum=max(maxsum,currsum);
          }
          
          return maxsum;
    }
