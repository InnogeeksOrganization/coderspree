import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n=scn.nextInt();
        for(int i=1;i<=n/2+1;i++)
        {
            for(int j=(n+1)/2;j>=i;j--)
            System.out.print("*\t");
            for(int j=1;j<=i;j++)
            System.out.print("\t");
            for(int j=1;j<=i-1;j++)
            System.out.print("\t");
            for(int j=(n+1)/2;j>=i;j--)
            System.out.print("*\t");
            
            
            System.out.println();
        }
        for(int i=1;i<=n/2;i++)
        {
            for(int j=1;j<=i+1;j++)
            System.out.print("*\t");
            for(int j=i;j<=n/2;j++)
            System.out.print("\t");
            for(int j=n/2;j>=i+1;j--)
            System.out.print("\t");
            for(int j=1;j<=i+1;j++)
            System.out.print("*\t");
            
            System.out.println();
        }
    }
}
    

    

    
