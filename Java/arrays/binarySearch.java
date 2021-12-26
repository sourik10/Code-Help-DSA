//binarySearch
//time = O(log n)

import java.util.Scanner;
public class MyClass {
    static int binarySearch(Integer ar[],int k){
        int l=0;
        int h=ar.length-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(ar[mid]==k){
                return mid;
            }
            else if (k>ar[mid]){
                l=mid+1;
            }
            else h=mid-1;
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
    System.out.println("index " +binarySearch(ar,k));
    
    }
}
