import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int a=0;
        int b=1;
        System.out.println(a);
        System.out.print(b+"	");
        for(int i=2;i<=n;i++)
        {
            if(i==2)
            {
                
            
            for(int j=1;j<=i-1;j++)
            {
                int c=a+b;
                System.out.print(c +"	");
               
                a=b;
                b=c;
            }
            }
            else{
                   
            for(int j=1;j<=i;j++)
            {
                int c=a+b;
                System.out.print(c +"	");
               
                a=b;
                b=c;
            }
            }
            System.out.println();
        }
    }
}