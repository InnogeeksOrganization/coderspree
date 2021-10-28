import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  
       // write ur code here
        int t=scn.nextInt();
        for(int x=0;x<t;x++){
            int c=0;
            int n=scn.nextInt();
            for(int y=2;y*y<=n;y++){
                if(n%y==0){
                    c++;
                }
            }
            if(c==0){
                System.out.println("prime");
            }
            else{
                System.out.println("not prime");                
            }
        }
  }
  }