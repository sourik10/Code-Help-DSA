import java.util.Scanner;
public class MyClass {
    /*
    static void swap(int a,int b){
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println(a);
        System.out.println(b);

    }
    */
    
    static void swapAlternate(Integer ar[]){
       for(int i=0;i<ar.length;i+=2){
           if(i+1 < ar.length){
               
               int t=ar[i];
               ar[i]=ar[i+1];
               ar[i+1]=t;
           }
       }
    }
    
    public static void main(String args[]) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    Integer[] ar=new Integer[n];
    for(int i=0;i<n;i++){
        ar[i]=sc.nextInt();
    }
    
    System.out.println("Initial array ");
    for(int i=0;i<n;i++){
        System.out.print(ar[i]+" ");
    }System.out.println();
    
    swapAlternate(ar);
    
    System.out.println("After swapping ");
    for(int i=0;i<n;i++){
        System.out.print(ar[i]+" ");
    }
    }
}
