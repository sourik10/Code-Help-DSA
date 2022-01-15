import java.util.Scanner;
public class MyClass {
    public static int fibo(int n){
        
        //base case
        if(n==0 || n==1){
            return n;
        }
        
        //recursive case
        return fibo(n-1)+fibo(n-2);
    }
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        
     System.out.println(fibo(a));
    }
}
