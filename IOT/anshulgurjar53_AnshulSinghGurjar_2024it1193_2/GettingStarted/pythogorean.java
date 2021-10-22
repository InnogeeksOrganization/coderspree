import java.util.*;


  public class Main{
  
  public static void main(String[] args) {
    // write your code here 
    Scanner sc= new Scanner(System.in);
    int a=sc.nextInt();
    int b=sc.nextInt();
    int c=sc.nextInt();
    if((c*c)==(a*a)+(b*b)||(a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c))
    System.out.println("true");
    else
    System.out.println("false");
    
   }
  }