import java.util.*;

public class IsANumberPrime {
    public static void main(String[] args)  {
        Scanner scn = new Scanner(System.in);
      int t=scn.nextInt();
      int count=0;
      for(int i=0;i<t;i++){count=0;
          int n=scn.nextInt();
          for(int j=2;j<n;j++){
              if(n%j==0){
                  count++;
              }
              if(count>0){
                  break;
              }
          }
          if(count==0){
              System.out.println("prime");
          }
          else{
              System.out.println("not prime");
          }
      }
    }
}    
