import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc= new Scanner(System.in);
        int i,j,k;
        int n=sc.nextInt();
        int a[][]=new int[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            a[i][j]=sc.nextInt();

        }
        for(j=0;j<n;j++)
        {
            i=0;k=j;
            while(k<n)
            {
                System.out.println(a[i++][k++]);
            }

        }

    }

}