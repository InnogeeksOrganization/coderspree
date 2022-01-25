import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    // System.out.println("Enter the size of row n1 and column m1");
    int n1 = sc.nextInt();
    int m1 = sc.nextInt();
    int a1[][] = new int [n1][m1];
    int i,j,k;
    // System.out.println("Enter the elements of row n1 and column m1");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            a1[i][j] = sc.nextInt();
        }
    }
    // System.out.println("Enter the size of row n2 and column m2");
    int n2 = sc.nextInt();
    int m2 = sc.nextInt();
    int a2[][] = new int [n2][m2];
    // System.out.println("Enter the elements of row n2 and column m2");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            a2[i][j] = sc.nextInt();
        }
    }
    if(m1!=n2)
    {
        System.out.println("Invalid input");
        return;
    }
    int sum[][] = new int[n1][m1];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            for(k=0;k<n1;k++)
            {
                sum[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            System.out.print(sum[i][j]+"\t");
        }
        System.out.println();
    }
 }
}