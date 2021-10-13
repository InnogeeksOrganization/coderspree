import java.util.*;
  
  public class Main{
  
  public static void main(String[] args){
      Scanner scn = new Scanner(System.in);
    int t= scn.nextInt();
    while(t!=0)
    {
        int n=scn.nextInt();
        int c=0;
        for(int j=2;j<=n/2;j++)
        {
            if(n%j==0)
            c++;
        }
            if(c==0)
            System.out.println("prime");
            else 
            System.out.println("not prime");
            t--;
        }
    
       
    }
    
   }
  