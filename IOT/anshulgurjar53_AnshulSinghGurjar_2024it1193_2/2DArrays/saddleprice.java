import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            a[i][j]=sc.nextInt();
        }
        int least=a[0][0],i,j,flag=1,k,col=0;
        for(i=0;i<n;i++)
        {
            least=a[i][0];col=0;
            flag=1;
            for(j=0;j<n;j++)
            {
                if(a[i][j]<least){
                least=a[i][j];
                col=j;}
            }
            for(k=0;k<n;k++)
            {
                if(a[k][col]>least){
                    flag=0;
                    break;
                }
                else
                flag=1;
            }
            if(flag==1)                          
                break;
            
        }
        if(flag==1)
        System.out.println(least);
        else
        System.out.println("Invalid input");    
    }
}