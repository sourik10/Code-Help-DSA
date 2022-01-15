int fib(int n){
    //base case
    if(n==0 || n==1){
        return n;
    }
    
    //recursive case
    return fib(n-1)+fib(n-2);
}

int countDistinctWayToClimbStair(long long nStairs)
{
   return fib(nStairs+1);
}
