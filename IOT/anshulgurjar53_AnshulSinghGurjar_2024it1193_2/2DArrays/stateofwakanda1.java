import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int i,j;
    int n=sc.nextInt();
    int m=sc.nextInt();
    int a[][]=new int[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        a[i][j]=sc.nextInt();
    }
    j=0;
    for(i=0;i<m;i++)
    {
        if(j==0){
            for(j=0;j<n;j++)
            System.out.println(a[j][i]);
        }
        else{
            for(j=n-1;j>=0;j--)
            System.out.println(a[j][i]);
        }
        j++;
    }


 }

}
