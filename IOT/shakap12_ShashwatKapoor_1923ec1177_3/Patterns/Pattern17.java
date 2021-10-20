import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n=scn.nextInt();
        int c=0;
        for(int i=0;i<n;i++){
            if(i==n/2){
                for(int j=0;j<n;j++){
                    System.out.print("*"+"\t");
                }
            }
            else if(i<n/2){
                for(int j=0;j<n/2;j++){
                    System.out.print("\t");
                }
                c++;
                for(int k=0;k<c;k++){
                    System.out.print("*"+"\t");
                }
            }
            else if(i>n/2){
                for(int j=0;j<n/2;j++){
                    System.out.print("\t");
                }
               
                for(int k=0;k<c;k++){
                    System.out.print("*"+"\t");
                }
                 c--;
            }
            System.out.println();
        }

    }
}