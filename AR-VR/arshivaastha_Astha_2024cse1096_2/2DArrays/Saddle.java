import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
           Scanner in =new Scanner(System.in);
     int n=in.nextInt();
     
     int [][]a=new int [n][n];
   
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
        a[i][j]=in.nextInt();
    }
    
    for(int i=0;i<n;i++)
    {   int sec=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<a[i][sec])
            sec=j;
        }
        
        
        boolean flag=true;
        for(int k=0;k<n;k++)
         {
            if(a[k][sec]>a[i][sec])
            {
                flag=false;
                break;
            }
        
         }
      
         if(flag==true)
         {
             System.out.println(a[i][sec]);
             return;
         }
      
    }
    
             System.out.println("Invalid input");
          
    
    
    
    }

}