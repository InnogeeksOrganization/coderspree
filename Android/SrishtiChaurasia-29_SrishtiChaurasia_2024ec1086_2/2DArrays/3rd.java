import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n,m,i,j;
    n=sc.nextInt();
    m=sc.nextInt();
    int a[][]=new int[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=sc.nextInt();
        }
    }
    for(i=0;i<m;i++)
    {
        if(i%2==0)
        for(j=0;j<n;j++)
        {
              System.out.println(a[j][i]);
        }
      
    
    else
    {
        for(j=n-1;j>=0;j--)
        {
            System.out.println(a[j][i]);
        }
      
    }
    
    


 }
}

}