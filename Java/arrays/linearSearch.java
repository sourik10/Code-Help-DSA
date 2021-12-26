//linearSearch
//time O(n)

import java.util.Scanner;
public class MyClass {
 
     static int linearSearch(Integer ar[],int k){
        for(int i=0;i<ar.length;i++){
            if(ar[i]==k){
                return i;
            }
        }return -1;
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
    
    System.out.println("enter key ");
    int k=sc.nextInt();
    System.out.println("index " +linearSearch(ar,k));
    
    }
}
