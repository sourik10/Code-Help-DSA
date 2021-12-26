import java.util.Scanner;
public class MyClass {
    public static void main(String args[]) {
     Scanner sc=new Scanner(System.in);
     String s=sc.nextLine();
     char[] ch=s.toCharArray();
     
     System.out.println("Before sorting: "+new String(ch));
       char temp;
        int i = 0;
        while (i < ch.length) {
            int j = i + 1;
            while (j < ch.length) {
                if (ch[j] < ch[i]) {
                    temp = ch[i];
                    ch[i] = ch[j];
                    ch[j] = temp;
                }
                j += 1;
            }
            i += 1;
        }
        System.out.println("After sorting: " + new String(ch));
    }
}
