//SieveOfErastothenes
//time complexity O(n*log(log(n)))

class Solution {
public:
    int countPrimes(int n) {
        int ct=0;
        vector<bool>prime(n+1,true);
        prime[0]=false;
        prime[1]=true;
        
        for(int i=2;i<n;i++){
            if(prime[i]){
                ct++;
                for(int j=2*i;j<=n;j=j+i){
                    prime[j]=false;
                }
            }
        }
        return ct;
    }
};
