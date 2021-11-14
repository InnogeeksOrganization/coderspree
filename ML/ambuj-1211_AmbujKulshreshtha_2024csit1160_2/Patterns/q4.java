import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int i,j,k;
        for(i=n;i>=1;i--){
            for(j=1;j<=n-i;j++){
                
                System.out.print("\t");
            }
            for(k=1;k<=i;k++)
            System.out.print("*\t");
      
            System.out.println();
        }
    }
}