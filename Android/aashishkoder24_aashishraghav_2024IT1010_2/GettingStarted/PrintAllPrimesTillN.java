import java.util.*;
import java.math.*;

public class Main{
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
      
        int low=sc.nextInt();
        int high=sc.nextInt();
        if(low!=1)
        {
        
      for(int i=low;i<=high;i++)
      {
        int o= isprime(i);
         
        if(o==1)
        System.out.println(i);
      }
        }
        else
        System.out.println(1);
    }
    static int isprime(int l)
     {
         int c=0;
         
          for(int j=1;j<=(int)Math.floor(Math.sqrt(l));j++)
        {
            if(l%j==0)
            c++;
        }
        return c;
     }
      
      
        
    
}