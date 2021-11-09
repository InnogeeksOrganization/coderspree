import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
        int n=scn.nextInt();int a=2*n-3;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            System.out.print(j+"\t");
            for(int j=1;j<=a;j++)
            System.out.print("\t");
            if(i!=n){
            for(int j=i;j>=1;j--)
            System.out.print(j+"\t");
            }
            if(i==n){
                for(int j=i-1;j>=1;j--)
                System.out.print(j+"\t");
            }
            
            System.out.println();
            a-=2;
        }
 }
}