import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      // write your code here 
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int c=0;
      int rev=n;
      while(n>0)
      {
        c++;
        n/=10;
      }
      int a[]=new int[c];int x=0;
      while(rev>0)
      {
        a[x++]=rev%10;
        
        rev/=10;
        
      }
      for(int i=c-1;i>=0;i--)
      {
          System.out.println(a[i]);
      }
     }
    }