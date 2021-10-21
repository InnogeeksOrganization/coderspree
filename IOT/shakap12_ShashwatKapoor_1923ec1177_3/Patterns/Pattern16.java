import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
     int n=scn.nextInt();
     int c=1;
     for(int i=0;i<n;i++){
         for(int j=1;j<=n;j++){
             if(j<=c)
             System.out.print(j+"\t");
             else
             System.out.print("\t");
         }
         for(int k=n-1;k>0;k--){
             if(k<=c)
             System.out.print(k+"\t");
             else if(k!=i)
             System.out.print("\t");
         }
         c++;
         System.out.println();
     }

 }
}