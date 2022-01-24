import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
Scanner sc=new Scanner (System.in);

    int n,m,i,j;
    n=sc.nextInt();
    m=sc.nextInt();
    int a[][] = new int[n][m];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=sc.nextInt();
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            System.out.print(a[i][j]+" ");
            }
            System.out.println();
    }
    
 
}
}