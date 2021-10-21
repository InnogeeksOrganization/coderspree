import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n=scn.nextInt();
        int c=-1;
        for(int i=0;i<n;i++){
            c++;
            for(int j=0;j<n;j++){
              if(c<n/2 && (j==0 ||j==n-1)){
                  System.out.print("*"+"\t");
              }
              else if(c>=n/2 && (i==j || (i+j)==n-1 || j==0 || j==n-1)){
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