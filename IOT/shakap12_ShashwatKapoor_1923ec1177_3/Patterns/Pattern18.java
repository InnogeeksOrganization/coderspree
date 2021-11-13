import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     // write ur code here
     int n=scn.nextInt();
     int c=1;
     int spaces=n/2-1;
     int star=3;
     for(int i=0;i<n;i++){
         if(i==0 || i==n-1){
             for(int j=0;j<n;j++){
                 System.out.print("*"+"	");
             }
             System.out.println();
         }
        if(c<=n/2 && i!=0){
            for(int j=0;j<n;j++){
                if(i==j || i+j==n-1){
                    System.out.print("*"+"	");
                }
                else{
                    System.out.print("	");
                }
            }
            System.out.println();
            c++;
        }
        
        if(c>n/2 && c!=n-1){
            for(int j=0;j<spaces;j++){
                System.out.print("	");
            }
            for(int k=0;k<star;k++){
                System.out.print("*"+"	");
            }
            System.out.println();
            spaces-=1;
            star+=2;
            c++;
        }
     }
}
}