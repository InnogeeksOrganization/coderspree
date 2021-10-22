import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
     int n=scn.nextInt();
     int spacesf=n/2,spacesb=-1;
     for(int i=0;i<n;i++){
         for(int j=0;j<spacesf;j++){
             System.out.print("\t");
         }
         System.out.print("*"+"\t");
         for(int j=0;j<spacesb;j++){
             System.out.print("\t");
         }
         if(i!=0 && i!=n-1){
             System.out.print("*");
         }
         if(i<n/2){
             spacesf--;
             spacesb+=2;
         }
         else if(i>=n/2){
             spacesf++;
             spacesb-=2;
         }
         System.out.println();
     }

 }
}