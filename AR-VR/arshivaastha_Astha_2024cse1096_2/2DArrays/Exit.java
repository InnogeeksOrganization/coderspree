import java.io.*;
import java.util.*;

public class Main
   {

  public static void main(String[] args) throws Exception
    {
        // write your code here
         Scanner in =new Scanner(System.in);
         int n=in.nextInt();
         int m=in.nextInt();
         int [][]a=new int [n][m];
   
         for(int i = 0; i < n; i++)
         {
         for(int j = 0; j < m; j++)
        a[i][j]=in.nextInt();
         }
         
         int dir=0;
         int i=0;
         int j=0;
         
         while (true)
         {
             dir=(dir+a[i][j])%4;
             if(dir==0)
             {
                 j++;
             }
             else if(dir==1)
             i++;
             else if(dir==2)
             j--;
             else if(dir==3)
             i--;
             
             
             if(i<0)
             {
                 i++;
                 break;
             }
             else if(j<0)
             {
                 j++;
                 break;
             }
             else if(i==a.length)
             {
                 i--;
                 break;
             }
             else if(j==a.length)
             {
                 j--;
                 break;
             }
         }System.out.println(i);
         System.out.println(j);
         
    
    }

}





