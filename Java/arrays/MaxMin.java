import java.util.Scanner;
public class MyClass {
    static void max_min(Integer ar[]){
        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        for(int i=0;i<ar.length;i++){
            if(ar[i]>max){
                max=ar[i];
            }
            if(ar[i]<min){
                min=ar[i];
            }
        }
        System.out.println("Maximum "+ max);
        System.out.println("Minimum "+min);
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
    max_min(ar);
    
    }
}
