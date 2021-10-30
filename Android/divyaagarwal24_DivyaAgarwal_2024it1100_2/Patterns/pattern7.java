import java.util.*;

public class pattern7 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n;
        n=scn.nextInt();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
              System.out.print("\t");  
            }
          
                System.out.print("*");
    
            System.out.println();
        }// write ur code here

    }
}
