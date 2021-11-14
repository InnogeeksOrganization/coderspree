import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
int n = scn.nextInt();
      int  m = scn.nextInt();
int i,g=0,x;
if(n>=2&&n<=1000000000&&m>=2&&m<=1000000000){
        for (i = 1; i <= n&& i <= m; ++i) 
        {
            if (n % i == 0 && m % i == 0) 
            {
                g = i;
            }
        }
        x = (m * n) / g;
 System.out.println(g);
 System.out.println(x);
     }
    }}