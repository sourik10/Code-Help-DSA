 //SieveOfErastothenes
//time complexity O(n*log(log(n)))

import java.util.Scanner;
public class MyClass {
    
    static int countPrimes(int n) {
        int ct=0;
       boolean[] prime=new boolean[n+1];
       for(int i=0;i<=n;i++){
            prime[i] = true;
       }
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
    public static void main(String args[]) {
      Scanner sc=new Scanner(System.in);
      int a=sc.nextInt();
      System.out.println(countPrimes(a));
    }
}
