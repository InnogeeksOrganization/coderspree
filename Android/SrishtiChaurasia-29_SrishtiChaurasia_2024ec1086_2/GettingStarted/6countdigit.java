import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num, i;
    num= sc.nextInt();
    int d=0;
    while(num!=0)
    {  num/=10;
       d++;
    }
       
    System.out.println(d);
   }
  }