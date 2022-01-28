import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n,i,j,s=-1,g=-1;
    n=sc.nextInt();
    int arr[][]=new int[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=sc.nextInt();
        }
    }
    int val=sc.nextInt();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==val)
            {
                 s=i;
                 g=j;
                break;
            }
            
        }
    }
    if(s!=-1&&g!=-1)
    {
        System.out.println(s);
        System.out.println(g);
    }
    else
     System.out.println("Not Found");
}
}