import java.util.Scanner;
public class MyClass {
     static void reverse(Integer ar[]){
        int s=0;
        int e=ar.length-1;
        while(s<e){
            int temp=ar[s];
            ar[s]=ar[e];
            ar[e]=temp;
            
            s++;
            e--;
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
    
    reverse(ar);
    System.out.println("reverse array ");
    for(int i=0;i<n;i++){
        System.out.print(ar[i]+" ");
    }
    
    }
}
