 //fastExpotentiation 

import java.util.Scanner;
public class MyClass {
    
    static int fastExpo(int a,int b) {
       int res=1;
       while(b>0){
           if(b%2==1){    //oddPower
           
               res=res*a;
           } 
           b=b>>1;
           a=a*a;
       }return res;
    }
    public static void main(String args[]) {
      Scanner sc=new Scanner(System.in);
      int a=sc.nextInt();
      int b=sc.nextInt();
    
      System.out.println(fastExpo(a,b));
    }
}
