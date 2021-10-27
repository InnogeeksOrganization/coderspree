import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

   
        int i,j,n,sp;
        n= scn.nextInt();
        sp=n-1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sp;j++)
            
                System.out.print("\t");
        
        for(j=1;j<=i;j++)
        
            System.out.print("*\t");
           
        sp--;
            System.out.println(); 
    }
    }
}
