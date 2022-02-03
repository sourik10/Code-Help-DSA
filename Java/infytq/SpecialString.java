public class MyClass {
     static void reverse_Ar(String str){
        int s=0;
	    int e=str.length()-1;
	    
	while(s<e){
		char temp=str.charAt(s);
		str.charAt(s)=str.charAt(e);;
		str.charAt(e)=temp;

		s++;
		e--;
	}
}
    public static void main(String args[]) {
        
     String one="Sourik@LM@10";
      String f1=" ";
      String f2=" ";
      for(int i=0;i<one.length();i++){
          if(Character.isAlphabetic(one.charAt(i))){
              f1+=one.charAt(i);
          }
      }
      reverse_Ar(f1);
      System.out.println(f1);
    }
}
