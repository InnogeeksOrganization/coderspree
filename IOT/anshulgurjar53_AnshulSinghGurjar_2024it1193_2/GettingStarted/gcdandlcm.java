import java.util.*;
import java.lang.*;
    
    public class Main{
        
    public static void gcd(int n1,int n2)
    {
        int a=Math.min(n1,n2);
        int i;
        for( i=a;i>0;i--)
        {
            if(n1%i==0)
            {
                if(n2%i==0)
                break;
            }
        }
        System.out.println(i);
    }
    
    public static void lcm(int n1,int n2)
    {
        int a=Math.max(n1,n2);
        int b=Math.min(n1,n2);int i;
        if(a%b==0)
        System.out.println(a);
        else
        {
            for(i=a;;i=i+a)
            {
                if(i%b==0)
                break;
            }
            System.out.println(i);
        }
    }
    
    public static void main(String[] args) {
      // write your code here
      Scanner sc=new Scanner(System.in);
      int n1=sc.nextInt();
      int n2=sc.nextInt();
      gcd(n1,n2);
      lcm(n1,n2);
     }
    }