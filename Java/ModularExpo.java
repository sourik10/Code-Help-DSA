 /*
First off, some important identities about the modulo operator:
(a mod m)+(b mod m)  mod m=a+b  mod m
(a mod m)−(b mod m)  mod m=a−b  mod m
(a mod m)⋅(b mod m)  mod m=a⋅b  mod m
*/

import java.util.Scanner;
public class MyClass {
 
     static int modularExponentiation(int x, int n, int m) {
	int res=1;
    while(n>0){
	      
        if(n%2==1){  //oddPower
            res=(res*x) % m;
        }
        n=n>>1;
        x=(x*x) % m;
    }return res;
}
    public static void main(String args[]) {
      Scanner sc=new Scanner(System.in);
      int a=sc.nextInt();
      int b=sc.nextInt();
      int m=10000007;
    
      System.out.println(modularExponentiation(a,b,m));
    }
}
