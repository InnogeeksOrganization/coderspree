import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
     int n=scn.nextInt();
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i==0 && (j<=n/2 || j==n-1)){
                 System.out.print("*"+"\t");
             }
             else if((i>0 && i<n/2) && (j==n/2 || j==n-1)){
                 System.out.print("*"+"\t");
             }
             else if(i==n/2){
                 System.out.print("*"+"\t");
             }
             else if(i>n/2 && (j==0 || j==n/2)){
                 System.out.print("*"+"\t");
             }
             else if(i==n-1 && (j==0 || j>=n/2)){
                 System.out.print("*"+"\t");
             }
            else{
                 System.out.print("\t");
             }
         }
         System.out.println();
       
     }
}
}